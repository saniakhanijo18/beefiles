//#include<stdio.h>
//int main(){
//	int i,n;
//	scanf("%d",&n);
//	int a=0;
//	for(i=2;i<=n-1;i++){
//		if (n%i==0){
//			a=1;
//			break;
//			
//		}
//		
//	}
//	if(n==1) printf("neither compozite nor prime");
//	else if(a==0) printf("prime");
//	else printf("composite");}

//#include<stdio.h>
//int main(){
//	int r, n;
//	
//scanf("%d",&n);
//int sum=0;
//
//while(n!=0){
//	
//	if(n%2==0){
//		sum =sum+(n%10);
//		n=n/10;
//		
//	}
//}
//	printf("%d",sum);
//}


//#include<stdio.h>
//int main(){
//	int  n;
//	scanf("%d",&n);
// int rev=0;
// while(n>0){
// 	rev=rev*10+(n%10);
// 	n=n/10;
// 	
// }
//int main(){
//	reverse_num= reverse
//}
// 
//
//	
//#include<stdio.h>
//int main(){
//	int i,n;
//	scanf("%d",&n);
//	int sum=0;
//	for(i=1;i<=n;i++){
//		if(i%2==0){
//			sum=sum-i;
//		}
//		else{
//			sum=sum+i;
////		}
////	}
////	printf("%d",sum);
////}
////
//
//
//#include<stdio.h>
//int main(){
//int i,n;
//
//scanf("%d",&n);
//int product=1;
//for(i=1;i<=n;i++){
//	product=product*i;
//
//}
//	printf("%d",product);

//#include<stdio.h>
//int main(){
//	int i,n,table;
//	scanf("%d",&n);
//	for(i=1;i<=10;i++){
//		table=i*n;
//	printf("%d*%d=%d\n",n,i,table);	
//	}
//	}	
//fabonacci seris
//#include<stdio.h>
//int main(){
//int i,n;
//scanf("%d",&n);
//int a=1;
//int b=1;
//int sum=1;
//for(i=1;i<=(n-2);i++){
//	sum=a+b;
//	a=b;
//	b=sum;
//	printf("%d\n",sum);
//}
//}


#include<stdio.h>
#include<math.h>
int main(){
	int i,n,c;
	scanf("%d",&n);
	int count=0;
	int sum=0;
	int s=n;
	while(s!=0){
	
		s=s/10;
		count++;}
printf("%d\n",count);

int r=n;


while(r!=0){
	c=r%10;
	sum=sum+pow(c,count);
	r=r/10;
}
printf("%d\n",sum);
if (n==sum)
	printf("arm...");
	else printf("not");
}
