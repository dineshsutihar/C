#include <stdio.h>

int main()
{
    int referenceString[] = {2, 4, 6, 9, 1, 1, 4, 3};
    int pageFaults = 0, i, j, s, pages, frames;
    pages = sizeof(referenceString) / sizeof(referenceString[0]);
    frames = 3;
    int temp[frames];
    for (i = 0; i < frames; i++)
    {
        temp[i] = -1;
    }
    for (i = 0; i < pages; i++)
    {
        s = 0;
        for (j = 0; j < frames; j++)
        {
            if (referenceString[i] == temp[j])
            {
                s++;
                pageFaults--;
            }
        }
        pageFaults++;
        if ((pageFaults <= frames) && (s == 0))
        {
            temp[i] = referenceString[i];
        }
        else if (s == 0)
        {
            temp[(pageFaults - 1) % frames] = referenceString[i];
        }
        printf("\n");
        for (j = 0; j < frames; j++)
        {
            printf("%d\t", temp[j]);
        }
    }
    printf("\nTotal Page Faults:\t%d\n", pageFaults);
    return 0;
}