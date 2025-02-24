//take 3 positive integer and print the largest of three numbers
/*#include<stdio.h>
int main(){
	int a;
	printf("enter value of a: ");
	scanf("%d",&a);
	int b;
	printf("enter value of b: ");
	scanf("%d", &b);
	int c;
	printf("enter value of c: ");
	scanf("%d",&c);
	if(a>b && a>c){
		printf("a is greatest of all");}
		else if(b>a && b>c){
			printf("b is greatest of all");}
			else{
				printf("c is greatest of all");
			}
		
	
}*/
#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter first side");
	scanf("%d",&a);
	printf("enter second side");
	scanf("%d",&b);
	printf("enter third side");
	scanf("%d",&c);
	if(a+b>c && b+c>a && a+c>a ){
		printf("the triangle is formedd");
		
	}
	else{ 
	printf("not");
	}

	
}
