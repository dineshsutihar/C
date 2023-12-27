#include <stdio.h>
#include <string.h>

int main()
{
    char str[100]; // Declare a character array to store the string
    char *p;       // Declare a pointer to a character

    printf("Enter a string: ");
    gets(str); // Read the string from the user

    p = str; // Assign the address of the first element of the array to the pointer

    printf("The alternate characters of the string are: ");
    for (int i = 0; i < strlen(str); i += 2)
    {
        printf("%c", *(p + i)); // Print the character pointed to by the pointer
    }
    return 0;
}
