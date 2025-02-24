//#include<stdio.h>
//void reverse(int arr[],int si,int ei){
//
//int i,j;
//for(i=si,j=ei;i<j;i++,j--){
//int temp=arr[i];
//arr[i]=arr[j];
//arr[j]=temp;
//
//
//	
//}
//return;}
//int main(){
//	int arr[7]={2,3,4,5,6,7,8};
//	int k=3 ;
//
//	int i;
//	int n=7;
//	k=k%n;
//	reverse(arr,0,n-1);
//	reverse(arr,0,k-1);
//	reverse(arr,k,n-1);
//	for(i=0;i<7;i++){
//		printf("%d",arr[i]);
//	}
//	
//}
   

#include<stdio.h>
int main(){
	int arr[4]={3,1,7,1};
	int x=2;
	int i;
	for(i=0;i<4;i++){
		if(arr[i]>x){
			x=arr[i];
		}
			printf("%d\n",x);
	}
}
