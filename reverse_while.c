// find the reverse number of given number.
/* n=123
rev=0

reverse = 321

n=123 !=0

rem=n%10    123%10 =3
rev=rev*10+rem   = 0*10+3 =3
n=n/10      123/10=12   !=0

rem=n%10    12%10 =2
rev=rev*10+rem   = 3*10+2 =32
n=n/10      12/10=1   !=0

rem=n%10    1%10 =1
rev=rev*10+rem   = 32*10+1 =321
n=n/10      1/10=0  !=0

print rev 321 */

/* Algorithm :-
step 1: start 
step 2: declare variable n, rem, rev=0 
step 3: read n
step 4: check the condition n!=0 continue step 5
step 5: rem= n%10
step 6: rev=(rev*10)+rem 
step 7: n=n/10
step 8: repeat fromm step 4 till conditon is fail 
step 9: print rev
step 10: stop */

// program will start from here 
#include<stdio.h>
main()
{
    int n, rem, rev=0;
    printf("enter the number");
    scanf("%d",&n);
    while (n!=0)
    {
/* in this program there is an issue that if we will
 give input as 001 then will only give output as 1 
 because 00 is not consider by compiler */
        rem=n%10; 
        rev=(rev*10)+rem;
        n=n/10;

    }
    printf(" \n reverse is %d",rev);
}