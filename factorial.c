#include<stdio.h>
int main()
{
	int i,factorial=1,n;
	printf("enter a number ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		factorial=factorial*i;
	}
	printf("sum of n factorial is %d ",factorial);
	return 0;
}
