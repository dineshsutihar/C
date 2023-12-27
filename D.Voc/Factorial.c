#include<stdio.h>
int main()
{
	int n,fact=1,i;
	printf("input enter a number: ");
	scanf("%d", &n);
	for (i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("factorial of is %d of %d",fact,n);
	return 0;
}
