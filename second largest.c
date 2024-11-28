#include<stdio.h>
int main()
{
	int a[5]={10,7,11,6,5};
	int largest=0,i,second =-1;
	for(i=0;i<5;i++){
		
		if(a[i]>largest){
		
		largest=a[i];
		
		}
	}
	//printf("%d",largest);
	for(i=0;i<5;i++){
		if(a[i]!=largest&&(second==-1||a[i]>second)){
			second=a[i];
			
		}
	
	printf("%d",second);
	return 0;
}
}
