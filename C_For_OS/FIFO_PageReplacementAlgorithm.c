#include <stdio.h>
#define FRAME_SIZE 3 // number of frames in memory
int main()
{
    int reference_string[] = {2, 3, 2, 1, 5, 2, 4, 5, 2, 4, 5, 3, 2, 5, 2};
    int n = sizeof(reference_string) / sizeof(reference_string[0]);
    int frames[FRAME_SIZE];
    int frame_index = 0;
    int page_faults = 0;
    // initialize frames array to -1 to indicate empty frames
    for (int i = 0; i < FRAME_SIZE; i++)
    {
        frames[i] = -1;
    }
    // display initial state of memory
    printf("Reference String: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", reference_string[i]);
    }
    printf("\n\n");
    printf("Memory:\n\n");
    for (int i = 0; i < FRAME_SIZE; i++)
    {
        printf("|---");
    }
    printf("|\n");
    for (int i = 0; i < FRAME_SIZE; i++)
    {
        printf("|   ");
    }
    printf("|\n");

    for (int i = 0; i < FRAME_SIZE; i++)
    {
        printf("|---");
    }
    printf("|\n\n");

    // iterate through reference string and simulate page replacement
    for (int i = 0; i < n; i++)
    {
        int page = reference_string[i];
        int found = 0;

        // check if page is already in memory
        for (int j = 0; j < FRAME_SIZE; j++)
        {
            if (frames[j] == page)
            {
                found = 1;
                break;
            }
        }
        // if page is not in memory, replace the oldest page with the new page
        if (!found)
        {
            frames[frame_index] = page;
            frame_index = (frame_index + 1) % FRAME_SIZE;
            page_faults++;
        }
        // display current state of memory
        for (int j = 0; j < FRAME_SIZE; j++)
        {
            if (frames[j] == -1)
            {
                printf("|   ");
            }
            else
            {
                printf("| %d ", frames[j]);
            }
        }
        printf("|\n");
        for (int j = 0; j < FRAME_SIZE; j++)
        {
            printf("|---");
        }
        printf("|\n");
        if (!found)
        {
            printf("Page fault: %d\n", page);
        }
    }
    printf("\nNumber of page faults: %d\n", page_faults);
    return 0;
}
