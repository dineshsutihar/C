#include <stdio.h>
#include <string.h>

void display(char str[]); // Function prototype

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    display(str); // Call the display function

    return 0;
}

void display(char str[])
{
    int vowels = 0, consonants = 0;

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vowels++; // Increment the vowel count
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            consonants++; // Increment the consonant count
        }
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
}
