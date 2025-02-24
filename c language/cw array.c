//#include<stdio.h>
//int main(){
//	int i;
//	
//	int marks[5];
//		for(i=0;i<5;i++){
//			scanf("%d\n",&marks[i]);
//		}
//	for(i=0;i<5;i++){
//		printf("%d\n",marks[i]);	}
//		
//		for(i=0;i<5;i++){
//		
// if(marks[i]<35){
// 
//			printf("%d\n",i);	
//	}}}
  
  
  
//#include<stdio.h>
//int main(){
//	int arr[9];
//	printf("%d",arr[8]);
//}

//#include<stdio.h>
//int main(){
//	int i;
//	int product=1;
//	int n;
//	scanf("%d",&n);
//	printf("%d",n);
//	int arr[n];
//	for(i=0;i<n;i++){
//		scanf("%d",&arr[i]);
//	}
//	for(i=0;i<n;i++){
//		printf("%d",arr[i]);
//	
//}
//for(i=0;i<=n;i++){
//	product=product*arr[i];
//}
//printf("%d",product);}


//#include<stdio.h>
//int main(){
//	int i;
//	int arr[4];
//	int max=arr[0];
//	for(i=0;i<=4;i++){
//		scanf("%d\n",&arr[i]);
//		printf("%d\n",arr[i]);
//	}
//	
// for(i=0;i<=4;i++){
// 	if(arr[i]>max){
// 		max=arr[i];
//	 }
// }
// printf("%d\n",max);
//}
//
//#include<stdio.h>
//int main(){
//	int arr[5]={5,9,7,8,6};
//	int brr[5];
//	int i;
//	for(i=0;i<5;i++){
////		brr[i]=arr[4-i];}
//	for(i=0;i<5;i++){
//		arr[i]=brr[i];}
//	
//		for(i=0;i<5;i++){
//		
//	printf("%d ",arr[i]);}
//}

//#include<stdio.h>
//int reverse(int arr[]){
//
//int i=0;
//int j=(4);
//while(i<j){
//	int temp=arr[i];
//	arr[i]=arr[j];
//	arr[j]=temp;
//	i++;
//	j--;
//}
//return;}
//int main(){
//	int i,j;
//
//int arr[5]={2,3,4,5,6};
//reverse(arr);
//for(i=0;i<5;i++){
//	printf("%d",arr[i]);
//}
//}

//#include<stdio.h>
//void reverse(int arr[]){
//	int i=0;
//	int j=5;
//	for(i=0,j=5;i<j;i++,j--){
//		int temp=arr[i];
//		arr[i]=arr[j];
//		arr[j]=temp;
//	}
//return;	
//}
//int main(){
//	int i;
//int arr[6]={2,4,5,3,5,6};
//reverse(arr);
//for(i=0;i<6;i++){
//
//printf("%d ",arr[i]);}
//}

//#include<stdio.h>
//void reverse(int arr[]){
//	int i,j;
//	for(i=0,j=4;i<j;i++,j--){
//	
//	int temp=arr[i];
//	arr[i]=arr[j];
//	arr[j]=temp;
//	break;
//}
//return;
//}
//int main(){
//	int i,j;
//
//	int arr[5]={1,9,3,9,1};
//	reverse(arr);
//	for(i=0;i<5;i++){	
//		
//	
//		if(arr[i]==arr[j]){
//			printf("palindrome");
//			
//		}
//		else("not");}
//		
//		
//	}


//#include<stdi0.h>
//int main
//
////#include<stdio.h>
////void reverse(int arr[]){
////	int i=2,j=4;
////	while(i<j){
////	int temp=arr[i];
////	arr[i]=arr[j];
////	arr[j]=temp;
////	i++;
////	j--;
////	}
////	return;
////}
////int main(){
////	int i;
////int arr[6]={1,2,3,5,4,6};
////reverse(arr);
////for(i=0;i<6;i++){
////	printf("%d",arr[i]);
////}
////}
////
////
////
//
//#include<stdio.h>
//int main(){
//	int arr[7]={2,3,4,5,6,7,8};
//	int k=3 ;
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


//#include<stdio.h>
//#include<stdbool.h>
//int main(){
//int arr[6]={2,34,34,56,67,9};
//int x=1;
//bool flag=false;
//int i;
//int idx=-1
//for(i=0;i<6;i++){
//	if(arr[i]==x){
//		flag=true;
//idx=i;
//		break;
//	}
//}
//if(flag==false)	printf("not present");
//else{
//	printf("present");
//}
//}


//#include<stdio.h>
//int main(){
//int arr[99];
//int x,i;
//int sum2;
//int sum=0;
//for(i=0;i<99;i++){
//	sum=sum+arr[i];
//	printf("%d\n",sum);
//}
//
//sum2=100*(100+1)/2;
//x=sum-sum2;
//printf("%d %d",x);
//}


//#include<stdio.h>
//#include<stdbool.h>
//int main(){
//	int arr[7]={2,3,1,3,4,2,1};
//	int i,j;
//	
//	for(i=0;i<7;i++){
//		bool flag=false;
//		for(j=i+1;j<7;j++){
//			if(arr[i]==arr[j]){
//				flag=true;
//				
//			}
//			
//		}
//		if(flag==false){
//			printf("%d",arr[i]);
//			break;
//		}}
//	
//}



//
//#include<stdio.h>
//int main(){
//	int marks[5]={35,56,23,78,12};
//	int i;
//	for(i=0;i<5;i++){
//		if(marks[i]<=35){
//			printf("%d  %d\n",marks[i],i);
//		}
//	}
//}

//
//#include<stdio.h>
//int main(){
//	int product=1;
//	int arr[4]={7,8,5,1};
//	int i;
//	for(i=0;i<4;i++){
//	product=product*arr[i]	;
//	
//	}
//	printf("%d\n",product);
//	
//}

#include<stdio.h>
int main(){
//	int product=
	int arr[4]={7,8,5,1};
	int i;
	
	int min=arr[0];
	for(i=1;i<4;i++){
		if(min>arr[i]){
			min=arr[i];
				
		}}
			printf("%d",min);
		}

