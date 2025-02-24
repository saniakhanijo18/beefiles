// prime or composite:-
#include<stdio.h>
int main(){
	int n,i;
	printf("enter a num");
	scanf("%d",&n);
	int a=0;
	for(i=2;i<=n-1;i++){
	
		if(n%i==0){
			a=1;
			break;
			
		}
}
		if(n==1) printf("neither composite nor prime");
	else if(a==0) printf("prime");
		else printf("composite");
	
}
