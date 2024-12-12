#include<stdio.h>
void remDups(int arr[],int n)
{
	int i;
	int res=0;
	for(i=1;i<=n;i++){
		if(arr[i]!=arr[res]){
			arr[res]=arr[i];
			res++;
			printf("%d  ",arr[res]);
		}
	}
	
}
int main(){
	int arr[6]={10,10,20,30,30,40};
	remDups(arr,6);
	//printf("%d",ans);
	return 0;	
}
