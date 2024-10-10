#include<stdio.h>
int main(){
	int n,i=2,s=0;
	printf("\n enter the value of n");
	scanf("%d",&n);
	while(i<=n)
	{
	 if(i%2==0)
	 {
	 
	 	s=s+(i*i*i);
	 }
	 i++;
    } 
	 printf("\nsum=%d",s);
	 
	 
	}

	
	
