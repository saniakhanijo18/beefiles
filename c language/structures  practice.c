#include<stdio.h>
struct student{
	char name[30];
	int age;
	float marks;
};
int main(){

int n,i;
//int max=a1[0];
printf("enter total student");
scanf("%d",&n);
struct student a1[n];
for(i=0;i<n;i++){
	scanf("%s %d %f",a1[i].name,&a1[i].age,&a1[i].marks);
}
for(i=0;i<n;i++){
	printf("%d %s %f", a1[i].name,a1[i].age,a1[i].marks);
}
int max=a1[0].marks;
for(i=0;i<n;i++){
	if(a1[i].marks>max){
		max=a1[i].marks;
	}
	printf("%s",a1[i].name);
}}
