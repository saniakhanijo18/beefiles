/*#include<stdio.h>
int main(){
int i;
for (i=0; i<=100*2; i+=2){
		printf("Hello %d\n",i);
	}
}*/
// sum of n natural numbers
/*#include<stdio.h>
int main(){
	int n,i,sum=0;
	printf("enter any number");
	scanf("%d",&n);

	for(i=1;i<=n;i=i+1){
	sum=sum+i;	
	}
	printf("%d",sum);
}*/


/*reverse the number
#include<stdio.h>
int main(){
	int n,reverse=0,digit;
	printf("enter any number");
	scanf("%d",&n);
	int i;
	for(i=n;i!=0;i=i/10){
		digit=i%10;
		reverse=reverse*10+digit;
		
		
	}
	printf("reverse of number is %d",reverse);*/

/*#include<stdio.h>
int main()
{
int i,j;
for(i=0;i<5;i++){
	for(j=0;j<8;j++)
{
	}	
printf("hello%d%d",i,j);
}
}*/

/*#include<stdio.h>
int main(){
	int i,n;
//	printf("%d",n);
	//scanf("%d",&n);
	for(i=1;i<=10;i=i+3){
		printf("hello %d \n",i);
	}
}*/

/*#include<stdio.h>
int main(){
	int i;
	for(i=1;i<=100;i++){
		if(i%2!=0){
			printf("%d\n",i);
		}
		
	}
	
}*/
// print table of 19
/*include<stdio.h>
int main(){
	int i;
	for(i=19;i<=190;i++){
		if(i%19==0){
			printf("%d\n",i);
		}
	}
}*/
// table of any number 
/*#include<stdio.h>
int main(){
	int i,n;
	printf("enter  a numbber");
	scanf("%d",&n);
	for(i=n;i<=n*10;i=i+n){
		printf("%d\n",i);
	}
}*/

// display the odd AP 
/*#include<stdio.h>
int main(){
	int n;
	printf("enter a number");
	scanf("%d",&n);
	
	for(int i=1;i<=2*n-1;i=i+2){
		printf("%d",i);
	}
}*/


/*#include<stdio.h>
int main(){
	int i,n;
	printf("enter a number");
	scanf("%d",&n);
	for(i=2;i<=2*n;i=i+2){
		printf("%d\n",i);}
		
	}*/
	
/*#include<stdio.h>
int main(){
	int i,n;
	printf("enter a number");
	scanf("%d",&n);
	for(i=4;i<=(1+3*n);i=i+3){
		printf("%d\n",i);
	}
	
}
*/

/*#include<stdio.h>
int main(){
	int i,n;
	printf("enter any number");
	scanf("%d",&n);
	int a=1;
	for(i=1;i<=n;i++){
		
		printf("%d\n",a);
		a=a*2;
		
	}
}*/

/*#include<stdio.h>
int main(){
	int i,n;
	printf("enter any number");
	scanf("%d",&n);
	float a=100;
	for(i=1;i<=n;i++){
		printf("%f\n",a);
		a=a/2;
		
	}
	
}*/
/*#include<stdio.h>
int main(){
	int i;
	
	int a=100;
	for(i=1;a>0;i++){
		printf("%d\n",a);
		a=a-3;
	}
	
}*/

/*#include<stdio.h>
int main(){
	int i,n;
	printf("%d",n);
	scanf("%d",&n);
	float a=100;
	for(i=1;i<=n;i++){
		printf("%f\n",a);
		a=a/2;
	}
}*/
// number is prime or composite:-
/*#include<stdio.h>
int main(){
	int i,n;
	printf("%d",n);
	scanf("%d",&n);
	int a=0;
	for(i=2;i<=n-1;i++){
		if(n%i==0){
			a=1;
			break;
		}
	}
if(n==1) printf("1 is neither prime or omposite");
else if(a==0) printf("the given number is prime\n");
else printf("the given number is composite\n");	
}*/

// to check the number is prime or composite
/*#include<stdio.h>
int main(){
	int i,n;
	printf("",n);
	scanf("%d",&n);
	int a=0;
	for(i=2;i<=n-2;i++){
	if(n%i==0){
		a=1;
	break;
	}
	}
if(n==1) printf("the number is neither prime or composite");
else if(a==0) printf("the number is prime");
else printf("the number is composite");
}*/

#include<stdio.h>
int main(){
	int i;
	for(i=1;i<=100;i++){
	if(i%2!=0){
	continue;
	}
		printf("%d\n",i);
	}
}
