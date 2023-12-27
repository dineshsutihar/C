#include<stdio.h>
void main()
{
	int arr[1000][2]={1,2,3,4};
	printf("%u,%u", arr+1,&arr+1);
	return 0;
}

