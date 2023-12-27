// RoundRobin

#include <stdio.h>
int main()
{
    int n, time_quantum, total = 0, count = 0;
    float avg_wt, avg_tat;
    printf("Enter number of processes: ");
    scanf("%d", &n);
    int burst_time[n], temp_burst_time[n], process[n], waiting_time[n], turnaround_time[n];
    printf("\nEnter Burst Time:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Process %d: ", i + 1);
        scanf("%d", &burst_time[i]);
        temp_burst_time[i] = burst_time[i]; // Store Burst Time for later use
        process[i] = i + 1;                 // Process Number
    }
    printf("\nEnter Time Quantum: ");
    scanf("%d", &time_quantum);
    // Round Robin Scheduling Algorithm
    while (count != n)
    {
        for (int i = 0; i < n; i++)
        {
            if (temp_burst_time[i] > 0)
            {
                if (temp_burst_time[i] <= time_quantum)
                {
                    total += temp_burst_time[i];
                    turnaround_time[i] = total;
                    temp_burst_time[i] = 0;
                    count++;
                }
                else
                {
                    total += time_quantum;
                    temp_burst_time[i] -= time_quantum;
                }
            }
        }
    }
    total = 0;
    // Calculate Waiting Time
    for (int i = 0; i < n; i++)
    {
        waiting_time[i] = turnaround_time[i] - burst_time[i];
        total += waiting_time[i];
    }
    avg_wt = (float)total / n;
    total = 0;
    printf("\nProcess\tBurst Time\tWaiting Time\tTurnaround Time");
    for (int i = 0; i < n; i++)
    {
        printf("\nP%d\t\t%d\t\t%d\t\t%d", process[i], burst_time[i], waiting_time[i], turnaround_time[i]);
        total += turnaround_time[i];
    }
    avg_tat = (float)total / n;
    printf("\n\nAverage Waiting Time = %.2f", avg_wt);
    printf("\nAverage Turnaround Time = %.2f\n", avg_tat);
    return 0;
}
