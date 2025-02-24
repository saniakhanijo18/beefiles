//#include<stdio.h>
//int main(){
//	int i;
//	int arr[4] ={2,3,4,8};
//	for(i=0;i<=4;i++)
//	printf("%d",arr[i]);
//	
//} 


//#include<stdio.h>
//int main(){
//	int i;
//	int arr[3];
//	for(i=0;i<=2;i++)
//	scanf("%d",&arr[i]);
//	printf("%d",arr[2]);
//}

//#include<stdio.h>
//int main(){
//	int i;
//	int arr[5];
//
//	for(i=0;i<5;i++){
//		scanf("%d",&arr[i]); }
//	
//	for(i=0;i<=4;i++){
//	
//	printf("%d",arr[i]);}
//}

//#include<stdio.h>
//int main(){
////	int i;
////	
////	int marks[10];
////	for(i=0;i<10;i++){
////		scanf("%d",&marks[i]);
////	}
////		for(i=0;i<10;i++){
////			if(marks[i]<35){
////				printf("%d\n",i);
////			}
////		}
////}
//
//int arr[4];
//printf("%d",arr[0]);}


//#include<stdio.h>
//int main(){
//	int i,n;
//
//		scanf("%d",&n);
//		int arr[n];
//	int max=arr[0];
//	
//	for(i=1;i<n;i++){
//		scanf("%d",&arr[i]);
//	}
//	for(i=1;i<n;i++){
//	if(max<arr[i]){
//		max=arr[i];
//	}}
//	printf("%d",max);
//}

#include<stdio.h>
#include<math.h>
int main(){
	int i,n,c;
	int count=0;
	int sum=0;
	int x=n;
	scanf("%d",&n);
	while(x!=0){
		x=x/10;
		count++;
		
	}
	printf("%d",count);
	int y=n;
	for(i=1;i<=500;i++){
		c=y%10;
		sum=sum+pow(c,count);
		y=y/10;
	printf("%d",sum);	
	}}
	
	

