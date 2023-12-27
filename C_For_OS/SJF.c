

#include <stdio.h>
int main()
{
    int burst_time[20], process[20], waiting_time[20], turnaround_time[20];
    int i, j, n, total = 0, pos, temp;
    float avg_wt, avg_tat;
    printf("Enter number of processes: ");
    scanf("%d", &n);

    printf("\nEnter Burst Time:\n");
    for (i = 0; i < n; i++)
    {
        printf("Process %d: ", i + 1);
        scanf("%d", &burst_time[i]);
        process[i] = i + 1; // Process Number
    }

    // Sort Burst Time in ascending order using Selection Sort
    for (i = 0; i < n; i++)
    {
        pos = i;
        for (j = i + 1; j < n; j++)
        {
            if (burst_time[j] < burst_time[pos])
            {
                pos = j;
            }
        }
        temp = burst_time[i];
        burst_time[i] = burst_time[pos];
        burst_time[pos] = temp;

        temp = process[i];
        process[i] = process[pos];
        process[pos] = temp;
    }

    // Calculate Waiting Time and Turnaround Time
    waiting_time[0] = 0; // First Process has zero waiting time
    for (i = 1; i < n; i++)
    {
        waiting_time[i] = 0;
        for (j = 0; j < i; j++)
        {
            waiting_time[i] += burst_time[j];
        }
        total += waiting_time[i];
    }
    avg_wt = (float)total / n;

    total = 0;
    printf("\nProcess\t    Burst Time    \tWaiting Time\tTurnaround Time");
    for (i = 0; i < n; i++)
    {
        turnaround_time[i] = burst_time[i] + waiting_time[i];
        total += turnaround_time[i];
        printf("\nP%d\t\t%d\t\t%d\t\t%d", process[i], burst_time[i], waiting_time[i], turnaround_time[i]);
    }
    avg_tat = (float)total / n;

    printf("\n\nAverage Waiting Time = %.2f", avg_wt);
    printf("\nAverage Turnaround Time = %.2f\n", avg_tat);

    printf("\nGantt Chart:");
    printf("\n---------------\n");
    printf("|");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < burst_time[i]; j++)
        {
            printf(" ");
        }
        printf("|");
    }
    printf("\n");
    printf("0");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < burst_time[i]; j++)
        {
            printf(" ");
        }
        printf("%d", turnaround_time[i]);
    }
    return 0;
}
