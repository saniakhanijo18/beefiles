#include<stdio.h>
#include<math.h>
int main(){
	int num,c;
	int count=0;
	int sum=0;
	printf("enter a number");
	scanf("%d",&num);
	int x=num;
	while(x>0){
		count++;
		x=x/10;		
	}
	printf("%d\n",count);
	int y=num;
while(y>0){
	c=y%10;
	sum=sum+pow(c,count);
	y=y/10;
}
printf("%d",sum);
if(num==sum)
	printf("arm..");
else
printf("not");	
}
