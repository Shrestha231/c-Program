#include<stdio.h>
int main(){
	int n;
	//char g; if we use it without pointer it store only one character either o or e;
	char *g;//it store the address of string;
	printf("enter the value of n");
	scanf("%d",&n);
	g=(n%2==0)?"even":"odd";
	printf("%s",g);
	return 0;
}
