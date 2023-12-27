#include <stdio.h>
#include <stdbool.h>

#define M_PROC 5
#define M_RESO 3

int available[M_RESO], max[M_PROC][M_RESO], allocation[M_PROC][M_RESO], need[M_PROC][M_RESO];

bool isS_seq(int s_seq[]);

int main()
{

    printf("Banker's Algorithm\n\n");
    int i, j;
    printf("Available Resources:\n");
    for (i = 0; i < M_RESO; i++)
    {
        printf("Enter the number of available resource %d:", i + 1);
        scanf("%d", &available[i]);
    }
    printf("Request Resources:\n");
    for (i = 0; i < M_PROC; i++)
    {
        printf("Maximum demand of process %d: ", i + 1);
        for (j = 0; j < M_RESO; j++)
        {
            scanf("%d", &max[i][j]);
        }
    }
    printf("Allocated Resources:\n");
    for (i = 0; i < M_PROC; i++)
    {
        printf("Enter the allocation of process %d: ", i + 1);
        for (j = 0; j < M_RESO; j++)
        {
            scanf("%d", &allocation[i][j]);
            need[i][j] = max[i][j] - allocation[i][j];
        }
    }
    printf("\n\n Results\n\nNeed Matrix:\n");
    for (i = 0; i < M_PROC; i++)
    {
        for (j = 0; j < M_RESO; j++)
        {
            printf("%d ", need[i][j]);
        }
        printf("\n");
    }

    int s_seq[M_PROC];
    if (isS_seq(s_seq))
    {
        printf("The system is in a safe state.\n");
        printf("Safe sequence: ");
        for (i = 0; i < M_PROC; i++)
        {
            printf("%d ", s_seq[i] + 1);
        }
        printf("\n");
    }
    else
    {
        printf("The system is in an unsafe state.\n");
    }

    return 0;
}

bool isS_seq(int s_seq[])
{
    int work[M_RESO], finish[M_PROC];
    int i, j, k;

    for (i = 0; i < M_RESO; i++)
    {
        work[i] = available[i];
    }

    for (i = 0; i < M_PROC; i++)
    {
        finish[i] = false;
    }

    for (k = 0; k < M_PROC; k++)
    {
        for (i = 0; i < M_PROC; i++)
        {
            if (!finish[i])
            {
                bool canExecute = true;
                for (j = 0; j < M_RESO; j++)
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
                    for (j = 0; j < M_RESO; j++)
                    {
                        work[j] += allocation[i][j];
                    }
                    s_seq[k] = i;
                    break;
                }
            }
        }
        if (i == M_PROC)
        {
            break;
        }
    }

    for (i = 0; i < M_PROC; i++)
    {
        if (!finish[i])
        {
            return false;
        }
    }
    return true;
}
