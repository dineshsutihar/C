#include <stdio.h>
#include <string.h>

int main()
{
    char str[100]; // Declare a character array to store the string
    char *p;       // Declare a pointer to a character

    printf("Enter a string: ");
    gets(str); // Read the string from the user

    p = str; // Assign the address of the first element of the array to the pointer

    printf("The string in reverse order is: ");
    for (int i = strlen(str) - 1; i >= 0; i--)
    {
        printf("%c", *(p + i)); // Print the character pointed to by the pointer
    }
    printf("\n");

    return 0;
}
