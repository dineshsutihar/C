#include <stdio.h>
#include <stdbool.h>

#define MAX_PROCESSES 5
#define MAX_RESOURCES 3

int available[MAX_RESOURCES];
int max[MAX_PROCESSES][MAX_RESOURCES];
int allocation[MAX_PROCESSES][MAX_RESOURCES];
int need[MAX_PROCESSES][MAX_RESOURCES];

bool isSafeState(int safeSequence[]);

int main()
{
    // Initialize available, max, allocation, and need
    printf("Deadlock Avoidance using Banker's Algorithm\n\n");
    int i, j;
    printf("Available Resources:\n");
    for (i = 0; i < MAX_RESOURCES; i++)
    {
        printf("Enter the number of available instances of resource %d:", i);
        scanf("%d", &available[i]);
    }
    printf("Request Resources:\n");
    for (i = 0; i < MAX_PROCESSES; i++)
    {
        printf("Enter the maximum demand of process %d: ", i);
        for (j = 0; j < MAX_RESOURCES; j++)
        {
            scanf("%d", &max[i][j]);
        }
    }
    printf("Allocated Resources:\n");
    for (i = 0; i < MAX_PROCESSES; i++)
    {
        printf("Enter the allocation of process %d: ", i);
        for (j = 0; j < MAX_RESOURCES; j++)
        {
            scanf("%d", &allocation[i][j]);
            need[i][j] = max[i][j] - allocation[i][j];
        }
    }
    printf("\n\n Results\n\nNeed Matrix:\n");
    for (i = 0; i < MAX_PROCESSES; i++)
    {
        for (j = 0; j < MAX_RESOURCES; j++)
        {
            printf("%d ", need[i][j]);
        }
        printf("\n");
    }

    int safeSequence[MAX_PROCESSES];
    if (isSafeState(safeSequence))
    {
        printf("The system is in a safe state.\n");
        printf("Safe sequence: ");
        for (i = 0; i < MAX_PROCESSES; i++)
        {
            printf("%d ", safeSequence[i]);
        }
        printf("\n");
    }
    else
    {
        printf("The system is in an unsafe state.\n");
    }

    return 0;
}

bool isSafeState(int safeSequence[])
{
    int work[MAX_RESOURCES], finish[MAX_PROCESSES];
    int i, j, k;

    // Initialize work and finish
    for (i = 0; i < MAX_RESOURCES; i++)
    {
        work[i] = available[i];
    }

    for (i = 0; i < MAX_PROCESSES; i++)
    {
        finish[i] = false;
    }

    // Find a process that can be executed
    for (k = 0; k < MAX_PROCESSES; k++)
    {
        for (i = 0; i < MAX_PROCESSES; i++)
        {
            if (!finish[i])
            {
                bool canExecute = true;
                for (j = 0; j < MAX_RESOURCES; j++)
                {
                    if (need[i][j] > work[j])
                    {
                        canExecute = false;
                        break;
                    }
                }
                if (canExecute)
                {
                    finish[i] = true;
                    for (j = 0; j < MAX_RESOURCES; j++)
                    {
                        work[j] += allocation[i][j];
                    }
                    safeSequence[k] = i;
                    break;
                }
            }
        }
        if (i == MAX_PROCESSES)
        {
            break;
        }
    }

    // Check if all processes were executed
    for (i = 0; i < MAX_PROCESSES; i++)
    {
        if (!finish[i])
        {
            return false;
        }
    }
    return true;
}
