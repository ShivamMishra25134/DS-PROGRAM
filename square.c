#include<stdio.h>
int main()
{
	int i,sum=0,n ;
	printf("enter a number ");
	scanf("%d",&n);
	for (i=1;i<=10;i++)
	{
		sum=sum+i*i;
	}
	printf("sum of n number is %d ",sum);
	return 0;
}
