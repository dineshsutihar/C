
#include <stdio.h>
int main()
{
    int i, j, n, pos, temp;
    float avwt = 0, avtat = 0;

    printf("Enter number of processes: ");
    scanf("%d", &n);
    int bt[n], priority[n], process[n], wt[n], tat[n];

    printf("Enter the burst time and prority\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d%d", &bt[i], &priority[i]);
        process[i] = i + 1;
    }

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
        avwt = avwt + wt[i];
    }
    for (i = 0; i < n; i++)
    {
        tat[i] = wt[i] + bt[i];
        avtat += tat[i];
    }
    printf("\nProcess\tBurst Time\tPriority\tWaiting Time\tTurnaround Time");
    for (i = 0; i < n; i++)
    {
        printf("\nP%d\t\t%d\t\t%d\t\t%d\t\t%d", process[i], bt[i], priority[i], wt[i], tat[i]);
    }
    avwt = avwt / n;
    avtat = avtat / n;
    printf("\n\naverage Waiting Time = %.2f", avwt);
    printf("\naverage Turnaround Time = %.2f\n", avtat);
    return 0;
}
