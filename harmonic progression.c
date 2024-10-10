#include<stdio.h>
int main(){
	int n,i;
	float s=0;
	printf("\n enter the value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	//	printf("%d+ ",1.0/i);
		s=s+(1.0/i);
	}
	printf("\nsum=%.2f",s);
	return 0;
}
