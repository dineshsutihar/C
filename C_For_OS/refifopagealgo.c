#include <stdio.h>

int main()
{
    int referenceString[] = {2, 3, 2, 1, 5, 2, 4, 5, 2, 4, 5, 3, 2, 5, 2};
    int pageFaults = 0, i, j, s, pages, frames;
    pages = sizeof(referenceString) / sizeof(referenceString[0]);
    printf("\n What are the total number of frames:\t");
    {
        scanf("%d", &frames);
    }
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