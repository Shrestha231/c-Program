#include<stdio.h>
int main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	int c=sum(n);
	printf("%d",c);
	return 0;
}
int sum(int n)
{
	if(n==0)
	{
		return 0;
	}
	else
	{
	   return n%10+sum(n/10);
	}
}
