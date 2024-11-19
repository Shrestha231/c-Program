#include<stdio.h>
int main()
{
	int a[2][3],b[3][2],i,j;
	for(i=0;i<2;i++){
		for( j=0;j<3;j++)
		{
			printf("\n enter the value in matrix A:");
			scanf("%d",&a[i][j]);	
		}
}
for(i=0;i<2;i++){
		for( j=0;j<3;j++)
		{
			printf(" %d ",a[i][j]);
			b[j][i]=a[i][j];
		}
		printf(" \n ");
	}
	 printf("\nMatrix B :\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
	return 0;
}
