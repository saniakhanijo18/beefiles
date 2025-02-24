//#include<stdio.h>
//int main(){
//	int n,i;
//	printf("enter a num");
//	scanf("%d",&n);
//	int a=0;
//	for(i=2;i<=n-1;i++){
//	
//		if(n%i==0){
//			a=1;
//			break;
//			
//		}
//}
//		if(n==1) printf("neither composite nor prime");
//	else if(a==0) printf("prime");
//		else printf("composite");
//	
//}


//#include<stdio.h>
//int main(){
//	int x=4,y=0,z;
//	while(x>=0){
//		if(x==y)
//		break;
//		else 
//		printf("\n%d%d",x,y);
//		x--;
//		y++;
//	}
//}

//#include<stdio.h>
//int main(){
//	int n;
//	int count=0;
//	printf("entrr number");
//	scanf("%d",&n);
//	while(n!=0){
//	 
//	n=n/10;
//	count++;	
//	}
//	printf("the count is %d\n",count);
//}

//#include<stdio.h>
//int main(){
//	int n;
//	
//
//int sum=0;
//scanf("%d",&n);
//while(n!=0){
//	sum=sum+(n%10);
//	n=n/10;
//	
//	
//}
//printf("%d\n",sum);
//}


#include<stdio.h>
int main(){
	int r, n;
	
scanf("%d",&n);
int sum=0;

while(n!=0){
	
	if(n%2==0){
		sum =sum+(n%10);
		n=n/10;
		
	}
}
	printf("%d",sum);
}

