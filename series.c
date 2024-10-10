#include<stdio.h>
int main(){
	int n,i,t=9,s=0;
	printf("\n enter the value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		s=s+t;
		printf("%d+",t);
        t=(t*10)+9;
	}
	printf("\nsum=%d",s);
	return 0;
}
