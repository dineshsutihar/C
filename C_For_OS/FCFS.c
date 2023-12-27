
#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    int bt[n], wt[n], tat[n];
    float avgwt = 0, avgtat = 0;

    // Input the burst time for each process
    printf("Enter the burst time for each process:\n");
    for (i = 0; i < n; i++)
    {
        printf("Process %d: ", i + 1);
        scanf("%d", &bt[i]);
    }

    // Calculate waiting time and turnaround time for each process
    wt[0] = 0;
    for (i = 1; i < n; i++)
    {
        wt[i] = wt[i - 1] + bt[i - 1];
    }
    for (i = 0; i < n; i++)
    {
        tat[i] = wt[i] + bt[i];
        avgwt += wt[i];
        avgtat += tat[i];
    }
    // Print the execution table
    printf("\nExecution Table:\n");
    printf("+-----+------------+--------------+--------------+\n");
    printf("| PID | Burst Time | Waiting Time | Turnaround Time|\n");
    printf("+-----+------------+--------------+--------------+\n");
    for (i = 0; i < n; i++)
    {
        printf("|  P%d |     %2d     |      %2d      |      %2d        |\n", i + 1, bt[i], wt[i], tat[i]);
        printf("+-----+------------+--------------+--------------+\n");
    }
    // Print the Gantt chart
    printf("\nGantt chart:\n");
    for (i = 0; i < n; i++)
    {
        printf("+--------+");
    }
    printf("+\n");
    printf("|");
    for (i = 0; i < n; i++)
    {
        printf("  P%d\t|", i + 1);
    }
    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("+--------+");
    }
    printf("+\n");
    printf("0");
    for (i = 0; i < n; i++)
    {
        printf("\t%d", tat[i]);
    }
    // Calculate average waiting time and turnaround time
    avgwt /= n;
    avgtat /= n;
    printf("\n\nAverage waiting time: %.2f", avgwt);
    printf("\nAverage turnaround time: %.2f\n", avgtat);
    return 0;
}
