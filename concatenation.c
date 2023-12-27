#include<stdio.h>
#include<string.h>
main()
{
    char s1[20],s2[20];
    printf("\n enter the first string ;");
    scanf("%s",&s1);
    printf("\n enter the second string ;");
    scanf("%s",&s2);
    strcat(s1,s2); //for string copying strcpy(s1,s2);
    printf("\n concatenated string: %s",s1); // printf("\n copied=%s ",s1);

}