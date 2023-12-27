#include <stdio.h>
int main()
{
    int n, i, j, temp = 0, pos, total = 0;
    printf("Enter the no. of process:");
    scanf("%d", &n);
    int bt[n], wt[n], tat[n];
    printf("Enter the Bt:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &bt[i]);
    }
    // shorting algorithm
    for (i = 0; i < n; i++)
    {
        pos = i;
        for (j = i + 1; j < n; j++)
        {

            if (bt[j] < bt[pos])
            {
                pos = j;
            }
        }
        temp = bt[i];
        bt[i] = bt[pos];
        bt[pos] = temp;
    }
    wt[0] = 0;
    for (i = 1; i < n; i++)
    {
        wt[i] = bt[i - 1] + wt[i - 1];
    }
    int avwt = 0, avtat = 0;
    for (i = 0; i < n; i++)
    {
        tat[i] = wt[i] + bt[i];
        total = total + tat[i];
        avwt += wt[i];
    }
    printf("average waitign time is : %.2f\n", (float)total / n);
    printf("average tat time is : %.2f", (float)avtat / n);
}