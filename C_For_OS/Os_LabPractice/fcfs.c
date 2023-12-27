#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no of process: ");
    scanf("%d", &n);
    int bt[n], wt[n], tat[n];
    printf("Enter the bus time for each process\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &bt[i]);
    }
    wt[0] = 0;
    int waittime = 0, tattime = 0;
    for (int i = 1; i < n; i++)
    {
        wt[i] = wt[i - 1] + bt[i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        tat[i] = wt[i] + bt[i];
        waittime += wt[i];
        tattime += tat[i];
    }

    float avwt, avtat;
    avwt = (float)waittime / n;
    avtat = (float)tattime / n;
    printf("Average waiting time is %.2f\n", avwt);
    printf("Average TurnAround time is %.2f\n ", avtat);
}