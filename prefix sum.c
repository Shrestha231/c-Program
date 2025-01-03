#include<stdio.h>
int n;
int pos[10];  
int arr[10] = {2, 8, 3, 9, 6, 5, 4};
int getsum(int l,int r){
	if(l==0)
		return pos[r];
		else
		return pos[r]-pos[l-1];
	}
int main(){
	int arr[]={2,8,3,9,6,5,4};
	n=7;
	int i;
	pos[0]=arr[0];
    for(i=1;i<n;i++){
	pos[i]=pos[i-1]+arr[i];
	
}
	printf("%d",getsum(1,3));
	return 0;
	
}
