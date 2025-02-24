#include<stdio.h>
int  main(){
	int num;
	int c=num;
	int rev=0;
	printf("enter a num");
	scanf("%d",&num);
	while(num!=0){
	
	rev=rev*10+num%10;
	num=num/10;}
	printf("%d",rev);
	if(c==num){
		printf("palindrome");
		
	}
	else
	printf("not");
}

