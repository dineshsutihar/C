// Find the sum of givn digits.

/* 
step 1: start 
step 2: Declear variables, initializing sum=0
step 3: check the condition n!=0 continue step 4
step 4: rem =n%10
step 5: sum=sum+rem 
step 6: n=n/10
step 7: repeat step 3 if conditon is true then continue step 4, 5,6
step 8: print sum
step 9: stop 
 */

// Now program will  start from here.

#include<stdio.h>
main()
{
    int n,rem,sum=0;
    printf("enter the num :");
    scanf("%d",&n);
    while (n!=0)
    {
       rem=n%10;
       sum=sum+rem;
       n=n/10;
    }
    printf("\n sum of given digit is = %d",sum);
}