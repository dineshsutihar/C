
#include <stdio.h>
int main()
{
    int bt[20], priority[20], process[20], wt[20], tat[20];
    int i, j, n, total = 0, pos, temp;
    float avg_wt, avg_tat;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    printf("\nEnter Burst Time and Priority:\n");
    for (i = 0; i < n; i++)
    {
        printf("Process %d: ", i + 1);
        scanf("%d%d", &bt[i], &priority[i]);
        process[i] = i + 1; // Process Number
    }
    // Sort Processes in acsending order of Priority using Selection Sort
    for (i = 0; i < n; i++)
    {
        pos = i;
        for (j = i + 1; j < n; j++)
        {
            if (priority[j] < priority[pos])
            {
                pos = j;
            }
        }
        temp = bt[i];
        bt[i] = bt[pos];
        bt[pos] = temp;

        temp = priority[i];
        priority[i] = priority[pos];
        priority[pos] = temp;

        temp = process[i];
        process[i] = process[pos];
        process[pos] = temp;
    }
    // Calculate Waiting Time and Turnaround Time
    wt[0] = 0;
    for (i = 1; i < n; i++)
    {
        wt[i] = wt[i - 1] + bt[i - 1];
    }
    for (i = 0; i < n; i++)
    {
        tat[i] = wt[i] + bt[i];
        avg_wt += wt[i];
        avg_tat += tat[i];
    }
    total = 0;
    printf("\nProcess\tBurst Time\tPriority\tWaiting Time\tTurnaround Time");
    for (i = 0; i < n; i++)
    {
        printf("\nP%d\t\t%d\t\t%d\t\t%d\t\t%d", process[i], bt[i], priority[i], wt[i], tat[i]);
        total += tat[i];
    }
    avg_tat = (float)total / n;
    printf("\n\nAverage Waiting Time = %.2f", avg_wt / n);
    printf("\nAverage Turnaround Time = %.2f\n", avg_tat);
    return 0;
}
