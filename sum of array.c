#include<stdio.h>
int main()
{
	int a[10][10],r,c,sum=0,i,j;
	printf(" enter the number of rows");
	scanf("%d",&r);
	printf(" enter the number of columns");
	scanf("%d",&c);
	for(i=0;i<r;i++){
		for( j=0;j<c;j++)
		{
			printf("\n enter the values");
			scanf("%d",&a[i][j]);
		}
	}
	printf("\ncontent of the array\n ");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++)
		{
		
			printf("%d",a[i][j]);
			sum=sum+a[i][j];
		}
		printf("\n ");
}
printf("Sum=%d",sum);
return 0;
}
