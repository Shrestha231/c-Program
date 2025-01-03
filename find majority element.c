#include<stdio.h>
int majority(int nums[],int n){
	int freq=0,ans=0;
	int i;
	for(i=0;i<n;i++){
		if(freq==0){
			ans=nums[i];
		}
		if(ans==nums[i]){
			freq++;
		}
		else{
		freq--;
	}
}
 int count=0;
 for(i=0;i<n;i++){
 	if(ans==nums[i]){
 		count++;
	 }
 }
 if(count>n/2)
 	return ans;
 else
 return -1;
}
int main(){
	int nums[]={1,2,3,4};
	 int n=4;
    printf("%d",majority(nums,n));
	return 0;	
	
}
