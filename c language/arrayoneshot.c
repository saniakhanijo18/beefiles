//#include<stdio.h>
//int main(){
//	int i;
//	
//	int marks[5];
//		for(i=0;i<5;i++){
//			scanf("%d",marks[i]);
//		}
//	for(i=0;i<5;i++){
//		printf("%d",marks[i]);	}
//		for(i=0;i<5;i++){
//		
// if(marks[i]<35){
// 
//			printf("%d",i);	
//	}}}
//#include<stdio.h>
//int main(){
//	
//	int arr[4];
//	int i;
//	int max=arr[0];
//	for(i=0;i<=3;i++){
//		scanf("%d\n",&arr[i]);}
//		for(i=0;i<=3;i++){
//		
//		printf("%d\n",arr[i]);
//	}
//	
// for(i=0;i<=3;i++){
// 	if(max<arr[i]){
// 		max=arr[i];
//	 }
// }
// printf("%d\n",max);
//}


//
//#include<stdio.h>
//int main(){
//	;
//	
//	int arr[3];
//	int max=arr[0];
//	
//	int i;
//	for(i=0;i<3;i++){
//		scanf("%d\n",&arr[i]);
//}
//	for(i=0;i<3;i++){
//		printf("%d\n",arr[i]);
//	}
//	for(i=0;i<3;i++){
//		if(max<arr[i]){
//			max=arr[i];
//		}
//	}
//	printf("%d\n",i);}


//#include<stdio.h>
//void fun(int arr[]){
//
//arr[0]=6;
//return;}
//int main(){
//
//	int arr[5]={1,6,7,5,4};
//	printf("%d\n",arr[0]);
//	fun(arr);


///	printf("%d\n",arr[0]);}

//
//#include<stdio.h>
//void fun(int x){
//	x=3;
//	return;
//}
//int main(){
//	int a=9;
//	printf("%d",a);
//	fun(a);
//	printf("%d",a);
//}

//#include<stdio.h>
//int main(){
//	
//	int a,b;
//	scanf("%d",&a);
//	scanf("%d",&b);
//	a=a+b;
//	b=a-b;
//	a=a-b;
//	printf("%d\n%d",a,b);}

//#include<stdio.h>
//int main(){
//int c;	
//	int a,b;
//	scanf("%d",&a);
//	scanf("%d",&b);
//	c=a;
//	a=b;
//	b=c;
//	printf("%d\n%d",a,b);}

//#include<stdio.h>
//void fun(int arr[]){
//	int temp;
//	temp=arr[0];
//	arr[0]=arr[1];
//	arr[1]=temp;
//	return;
//}
//int main(){
//	int arr[2]={2,9};
//	printf("%d %d\n",arr[0],arr[1]);
//	fun(arr);
//		printf("%d %d\n",arr[0],arr[1]);
//		return;
//}

//#include<stdio.h>
//int main(){
//int arr[5]={2,3,6,7,8};
//int i;
//for(i=0;i<5;i++){
//	if(i%2==0){
//		arr[i]=arr[i]+10;
//	}
//	else{
//		arr[i]=arr[i]*2;
//	}}
//	
//	for(i=0;i<5;i++){
//	
//	printf("%d\n",arr[i]);}
//
//}
//#include<stdio.h>
//int main(){
//	int arr[5]={2,6,7,5,4};
//	int x,i;
//	int count=0;
//	printf("enter x ");
//	scanf("%d",&x);
//	for(i=0;i<5;i++){
//		if(arr[i]>x){
//		
//		count++;
//	}}
//	printf("%d",count);
//}


//#include<stdio.h>
//int main(){
//int arr[6]={2,4,3,4,9,6};
//int x,i,j;
//int totalpairs=0;
//scanf("%d",&x);
//for(i=0;i<6;i++){
//	for(j=i+1;j<6;j++){
//		if(arr[i]+arr[j]==x){
//		
//		totalpairs++;
//		printf("(%d,%d)",arr[i],arr[j]);}
//	}
//}
//printf("%d",totalpairs);
//}

//#include<stdio.h>
//int main(){
//	int arr[7]={3,5,4,2,7,1,2};
//	int totalpair=0;
//	int i,j,x;
//	scanf("%d",&x);
//	for(i=0;i<7;i++){
//		for(j=i+1;j<7;j++){
//			if(arr[i]+arr[j]==x){
//				totalpair++;
//				printf("(%d,%d)\n",arr[i],arr[j]);
//			}
//		}
//	}
//	printf("%d",totalpair);
//}


//#include<stdio.h>
//int main(){
//	int arr[7]={2,6,5,4,9,5,4};
//	int i,j,k,totalpair=0;
//	int x;
//	scanf("%d",&x);
//	for(i=0;i<7;i++){
//		for(j=i+1;j<7;j++){
//			for(k=j+1;i<7;i++){
//				if(arr[i]+arr[j]+arr[k]==x){
//					totalpair++;
//					printf("(%d,%d,%d\n)",arr[i]+arr[j]+arr[k]);
//					
//				}
//			}
//		}
//		printf("%d",totalpair);
//		
//	}}

//#include<stdio.h>
//int main(){
//	int arr[6]={2,4,3,5,9,7};
//	int i;
//	int smax=arr[0];
//	int max=arr[0];
//	for(i=1;i<6;i++){
//		if(max<arr[i]){
//			max=arr[i];
//		}
//	}
//	printf("%d\n",max);
//	for(i=1;i<6;i++){
//		if(smax<arr[i]&&max!=arr[i]){
//			smax=arr[i];
//		}
//		}
//		printf("%d",smax);
//	}
//	


//#include<stdio.h>
//int main(){
//	int arr[6]={3,4,2,5,7,4};
//	int i,INT_MIN;
//	int max=INT_MIN;
//	int smax=INT_MIN;
//for(i=0;i<6;i++){
//	if(max<arr[i]){
//		smax=max;
//		max=arr[i];
//	}
//else if(smax<arr[i]&&max!=arr[i]){
//	smax=arr[i];
//}
//
//}
//
//printf("%d\n",smax);	
//
//printf("%d",max);
//}
// find second largest num in array
//#include<stdio.h>
//int main(){
//int arr[5]={7,20,34,56,23};
//int i,int_min;
//int max=int_min;
//int smax=int_min;
//for(i=1;i<5;i++){
//	if(max<arr[i]){
//		smax=max;
//		max=arr[i];
//	}
//else if(smax<arr[i]&&max!=arr[i]){
//	smax=arr[i];
//}
//}
//printf("%d\n",smax);
//printf("%d",max);
//}

#include<stdio.h>
int main(){
	int i;
	int arr[6]={2,3,5,6,7,9};
	int brr[6];
	for(i=0;i<6;i++){
		brr[i]=arr[5-i];
	}
	for(i=0;i<6;i++){
	printf("%d \n",brr[i]);}
}
