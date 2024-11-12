#include<stdio.h>
int main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	int c=fact(n);
	printf("%d",c);
	return 0;
}
int fact(int n)
{
	if(n==0||n==1)
	{
		return 1;
	}
	else 
	{
		return n*fact(n-1);
	}
}
