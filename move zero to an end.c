#include<stdio.h>
void swap(int arr[],int i,int j){
	int temp;
	temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}

void moveZerotoend(int n,int arr[]){
	int i,count=0;
	for(i=0;i<n;i++){
		if(arr[i]!=0){
			swap(arr,i,count);
			count++;
		}
	}
	for(i=0;i<n;i++){
	printf("%d  ",arr[i]);
}
}

int main(){
	int arr[7]={5,6,0,10,0,0,2};
	 int n=7;
	moveZerotoend(n,arr);
	return 0;
}
