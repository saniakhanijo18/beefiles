/*#include<stdio.h>
int main(){
	int i=1;
	while (i<=100){
		printf("%d\n",i);
		i++;
	}
	return 0;
	
}*/

/*#include<stdio.h>
int main(){
	int i,n;
	printf("",n);
	scanf("%d",&n);
int	a=0;
	for(i=2;i<=n-1;i++){
		if(n%i==0){
			a=1;
			break;
		} } 
if( a==0) printf("the number is prime")	;
else printf("the number is composite");	
	
	
}*/

/*#include<stdio.h>
int main(){
	int x=4,y=0,z;
	while(x>=0){
		if(x==y)
		break;
		else
		printf("\n%d%d",x,y);
		x--;
		y++;
	}
	
}*/

/*#include<stdio.h>
int main(){
	int n;
	printf("enter a number");
	scanf("%d",&n);
	int count=0;
	while(n!=0){
		n=n/10;
		count++;
	}
	printf("the number of digits %d",count);
}*/

// program to find count of given number
/*#include<stdio.h>
int main(){
	int n;
	printf("enter  a number");
	scanf("%d",&n);
	int sum=0;
	while(n!=0){
		sum=sum+n;
		sum++;
		
	}
printf("the sum of digits %d",sum);	
}*/

// program to find sum ofgiven number;-
/*#include<stdio.h>
int main(){
	int n;
	printf("enter a number");
	scanf("%d",&n);
int	sum=0;
int ld=0;

while(n!=0){
	int ld=n%10;
	sum=sum+ld;
	n=n/10;
	
	
}
printf("sum of digits is %d",sum);
}*/

// program to find sum of even numbers:-
/*#include<stdio.h>
int main(){
	int n;
	printf("enter a number");
	scanf("%d",&n);
	int sum=0;
	int ld=0;
	while (n!=0){
		ld=ld%n; 
		if(n%2==0){
				sum=sum+n;
			ld=ld/n;	
	
	
	}}
	printf("the sum is %d",sum);
}*/

/* reverse of given number;-
#include<stdio.h> 
int main(){
	int n;
	printf("enter a number");
	scanf("%d",&n);
int r=0;
int ld=0;
while(n!=0){
	r=;
	n=n*10+ld;
	
}
printf("the reversae of number is %d",r);
//}*/
//
///*#include<stdio.h>
//int main(){
//	int n;
//	printf("enter a number");
//	scanf("%d",&n);
//	int count=0;
//	while(n!=0){
//	
//		n=n/10;
//		count++;}
//printf("the count of numbr is  %d",count);	
//	
//} */
//
///*#include<stdio.h>
//int main(){
//	int n;
//	printf("enter a number");
//	scanf("%d",&n);
//	int sum=0;
//	int ld=0;
//	while(n!=0){
//	
//	 ld=n%10;
//	if(ld%2!=0)
//	 
//	sum=sum+ld;
// n=n/10;}
// printf("the sum is %d",sum);
// 
//		
//		
//		 
//	}*/
//	
// 
///*#include<stdio.h>
//int main(){
//	int n;
//	printf("enter a number");
//	scanf("%d",&n);	
//	int r=0;
//	int ld=0;
//	while(n!=0){
//	r=r+(ld%10);
//			r=r*10;
//		n=n/10;}
//		
//	
//	printf("the reverse of number is %d",r);
//}*/
//
//
//
//
//
//
//
//
//
///*#include<stdio.h>
//int main(){
//	int n;
//	printf("enter a number");
//	scanf("%d",&n);	
//	int r=0;
//	
//	while(n!=0){
//	r=r+(n%10);
//			r=r*10;
//		n=n/10;}
//r=r/10;		
//	
//	printf("the reverse of number is %d",r);
//}
//*/
//
///*#include<stdio.h>
//int main(){
//	int n;
//	printf("enter a number");
//	scanf("%d",&n);	
//	int r=0;
//	while(n!=0){
//		r=r+(n%10);
//		r=r*10;
//		n=n/10;}
//		
//	
//	r=r/10;
//	printf("reverse number is %d",n);
//	
//}
//*/
//
//#include<stdio.h>
//int main(){
//	int sum =0;
//	for(i=1,i<=n,i++){
//		if(i%2!=0) sum=sum+i;
//		else sum=sum-i;}
//		print
//		
//		
//		
//		
//	}
//
//}


//
//#include<stdio.h>
//int main(){
//	int i,table, n;
//	scanf("%d",&n);
//	for(i=1;i<=10;i++){
//		table=n*i;
//		printf("%d*%d=%d\n",n,i,table);
//	}
//}
//C;
//	int a=0;
//	for(i=2;i<=n-1;i++){
//		n%i==0;
//		a=1;
//		break;
//		
//	}
//	if(n==1) printf("neither cp,posite nor prime");
//	else if(a==0) printf("prime");
//	else printf("composite");


#include<stdio.h>
int main(){
	int  n;
	scanf("%d",&n);
	int count=0;
	while(n!=0){
		n=n/10;
		count++;
		printf("%d",count);
	}
}
