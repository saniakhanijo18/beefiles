//#include<stdio.h>
//void greet(){
//	printf("good morning\n");
//	printf("good nap\n");
//	return; // khatm
//}
//int main(){
//	greet(); // call
//	greet();
//	greet();
//	greet();
//	return 0;
//}
//#include<stdio.h>
//void greet(){
//	printf("good morning\n");
//	printf("good nap\n");
//	return; // khatm
//}
//int main(){
//	int i;
//	for(i=1;i<=10;i++){
//		greet();
//	}}


//#include<stdio.h>
//int add(int a,int b){
//	return a+b;
//}
//int main(){
//	int a,b,sum;
//	scanf("%d",&a);
//		scanf("%d",&b);
//		sum=add(a,b);
//		printf("%d",sum);
//		return 0;
//}
//

//#include<stdio.h>
//int main(){
//	int i,n,r;
//	scanf("%d",&n);
//	scanf("%d",&r);
//	
//	
//	int nfact=1;
//	int rfact=1;
//	int nrfact=1;
//	for(i=1;i<=n;i++){
//		nfact=nfact*i;
//	
//	}
//	for(i=1;i<=r;i++){
//		rfact=rfact*i;
//	}
//	for(i=1;i<=n-r;i++){
//		nrfact=nrfact*i;
//	}
//	int ncr=nfact/ (rfact*nrfact);
//		printf("%d",ncr);
//		return 0;
//}
// combination
//#include<stdio.h>
//int factorial(int x){
//	int i;
//	int fact=1;
//for(i=1;i<=x;i++){
//	fact=fact*i;
//}
//return fact;	
//}
//int main(){
//	int n;
//	scanf("%d",&n);
//	int r;
//	scanf("%d",&r);
//int	nfact=factorial(n);
//int	rfact=factorial(r);
//int	nrfact=factorial(n-r);
//int ncr=nfact/(rfact*nrfact);
//printf("%d",ncr);
//return 0;
//



//#include<stdio.h>
//int factorial(int x){
//
//int i;
//int fact=1;
//for(i=1;i<=x;i++){
//	fact=fact*i;
//}
//return fact;
//}
//int combination(int n,int r){
//	return factorial(n)/(factorial(r)*factorial(n-r));
//}
//
//int main(){
//	int i,n,r;
//	scanf("%d",&n);
//	scanf("%d",&r);
//	
//		int ncr=combination(n,r);
//	printf("%d",ncr);}
//		
//	

//#include<stdio.h>
//int factorial(x){
//	int i;
//	int fact=1;
//	for(i=1;i<=x;i++){
//		fact=fact*i;
//	}
//	return fact;
//}
//int main(){
//
//int n;
//scanf("%d",&n);
//int r;
//scanf("%d",&r);
//int nfact=factorial(n);
//int rfact=factorial(r);
//int np=factorial(n)/factorial(r);
//printf("%d",np);}


//#include<stdio.h>
//int factorial(int x){
//	int i ;
//	int fact=1;
//	for(i=1;i<=x;i++){
//		fact=fact*i;}
//return fact;		
//}
//int main(){
//	int p, n,i,j;
//	scanf("%d",&n);
//scanf("%d",&j);
//scanf("%d",&i);
//	for(i=0;i<=n;i++){
//	for(j=0;j<=i;j++){
//		int ifact=factorial(i);
//	int jfact=factorial(j);
//	int icr=factorial(i)/(factorial(j)*factorial(i-j));}
//	printf("%d",p);
//}
//	
//}

//#include<stdio.h>
//int main(){
//	int a,b,c;
//	scanf("%d",&a);
//	scanf("%d",&b);
//	
//	c=a;	
//a=b;
//	b=c;
//	printf("%d\n%d\n",a,b);
//}

//#include<stdio.h>
//int main(){
//	int a,b;
//	scanf("%d",&a);
//	scanf("%d",&b);
//	a=a+b;
//	b=a-b;
//	a=a-b;
//	printf("%d\n%d\n",a,b);}

//#include<stdio.h>
//void swap(int a,int b){
//	a=a+b;
//	b=a-b;
//	a=a-b;
//	return;
//}
//int main(){
//	int a,b;
//	scanf("%d",&a);
//	scanf("%d",&b);
//	swap(a,b);
//	printf("%d\n%d\n",a,b);
//	
//}


//#include<stdio.h>
//int gcd(int a,int b){
//	for(i=1;i<=min(a,b;i++))
//}
//int main(){
//	int a,b;
//	scanf("%d",&a);
//	scanf("%d",&b);
//	int hcf=gcd(a,b);
//	printf("%d",a,b,hcf);
//	
//}

#include<stdio.h>
float tocelcius(float fahernite){
return	(5.0/9.0)*(fahernite-32.0);

}
int main(){
	float c,f;
	
		scanf("%f",&f);
	
		c=tocelcius(f);
		printf("%f",c);
}
