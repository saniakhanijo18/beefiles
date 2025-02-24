#include<stdio.h>
int main(){
	int arr[5]={4,6,2,8,9};
	int i;
	int x;
	int count=0;
	printf("enter x");
	scanf("%d",&x);
	int gre_ele=arr[0];
//	int max_ele=arr[0];
	for(i=0;i<5;i++){
		if(arr[i]>x){
			count++;
		}
		printf(" %d\n",count);
	}
		//printf("max ele is %d",max_ele);
}
