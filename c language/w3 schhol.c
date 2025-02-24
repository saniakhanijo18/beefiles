//#include<stdio.h>
//int main(){
//	int i;
//	for(i=0;i<=10;i++){
//		if(i%2==0){
//			printf("%d",i);
//		}
//	}
//}

//#include<stdio.h>
//int main(){
//	int i,n,table;
//	printf("enter a num");
//	scanf("%d",&n);
//	for(i=1;i<=10;i++){
//	table =	n*i;
//	printf("%d * %d = %d\n",n,i,table);}}

//#include <stdio.h>
//
//int main() {
//  int i;
//  
//  for (i = 0; i < 10; i++) {
//    if (i == 4) {
//      break;}
//       
//   //printf("%d\n", i); 
//  }
//   printf("%d\n", i); 
//  return 0;
//}


//#include<stdio.h>
//int main(){
//int ages[]={20,56,12,45,23};
//int i;
//
//int lowest_age=ages[0];
//for(i=1;i<5;i++){
//	if(lowest_age>ages[i]){
//	lowest_age=ages[i];
//}	
//}
//printf("%d",lowest_age);
//
//}


//#include<stdio.h>
//int main(){
//	int n,harsh;
//	int count=0;
//	printf("enter a num");
//	scanf("%d",&n);
//	while(n!=0){
//		harsh=n%10;
//		count++;
//		n=n/10;
//		
//		//printf("%d",count);
//	}
//	printf("%d",count);
//}


//#include<stdio.h>
//int main(){
//	int n;
//	printf("enter num",n);
//	scanf("%d",&n);
//	int sum=0;
//	while(n!=0){
//		sum=sum+(n%10);
//		n=n/10;}
//		printf("%d",sum);}
//	

#include<stdio.h>
int main(){
	int n;
	int sum=0;
	printf("enter a number");
	scanf("%d",&n);
	while(n>0){
		if(n%2==0){
			sum=sum+(n%10);
			n=n/10;}
			printf("%d",sum);	
		}
		//printf("%d",sum);
	
}

