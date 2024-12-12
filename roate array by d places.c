#include<stdio.h>
void rotateLeft(int arr[],int n){
	int i,temp;
	temp=arr[0];
	for(i=1;i<n;i++){
		arr[i-1]=arr[i];
}
	arr[n-1]=temp;
}
void leftRotatebydplaces(int arr[],int n,int d)
{
	int i;
	for(i=0;i<d;i++){
	rotateLeft(arr,n);
//	printf("%d",arr[i]);	
		}
 } 
int main(){
	int arr[5]={1,2,3,4,5};
	int d=2,n=5,i;
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
//	rotateLeft(arr,5);
	leftRotatebydplaces(arr,5,2);
	printf("\nArray after rotation\n");
	for(i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
	return 0;
	
}
