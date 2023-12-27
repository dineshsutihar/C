#include <stdio.h>
#include <stdlib.h>
#define PAGE_FRAMES 3
#define PAGE_REFERENCES 15
int main()
{
    int pageFrames[PAGE_FRAMES];
    int counter[PAGE_FRAMES];
    int pageReferences[PAGE_REFERENCES] = {2, 3, 2, 1, 5, 2, 4, 5, 2, 4, 5, 3, 2, 5, 2};
    int i, j, pageFaults = 0, lru;
    printf("Reference String: ");
    for (i = 0; i < PAGE_REFERENCES; i++)
    {
        printf("%d ", pageReferences[i]);
    }
    printf("\n");
    printf("Page frames: ");
    for (i = 0; i < PAGE_FRAMES; i++)
    {
        pageFrames[i] = -1;
        counter[i] = 0;
        printf("- ");
    }
    printf("\n");
    for (i = 0; i < PAGE_REFERENCES; i++)
    {
        for (j = 0; j < PAGE_FRAMES; j++)
        {
            if (pageFrames[j] == pageReferences[i])
            {
                counter[j] = i + 1;
                break;
            }
        }
        if (j == PAGE_FRAMES)
        {
            lru = 0;
            for (j = 1; j < PAGE_FRAMES; j++)
            {
                if (counter[j] < counter[lru])
                {
                    lru = j;
                }
            }
            pageFrames[lru] = pageReferences[i];
            counter[lru] = i + 1;
            pageFaults++;
        }
        printf("Page frames: ");
        for (j = 0; j < PAGE_FRAMES; j++)
        {
            printf("%d ", pageFrames[j]);
        }
        printf("\n");
    }
    printf("Total page faults: %d\n", pageFaults);
    return 0;
}
