#include<stdio.h>
int main()
{int num=2;
switch(num+2)
{
    case 1:
    printf("case 1: value: %d",num);
break;
 case 2:
    printf("case 2: value: %d",num);
break;
 case 3:
    printf("case 3: value: %d",num);
break;
default:
printf("Default case is: %d",num);
}
return 0;
}