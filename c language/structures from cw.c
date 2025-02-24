#include<stdio.h>
struct student{
	char name[30];
	int age;
	float marks;};
	int main(){
	
		struct student s1,s2;
		scanf("%s\n %d\n %f",s1.name,&s1.age,&s1.marks);
	printf("%s\n %d\n %.2f",s1.name,s1.age,s1.marks);
	scanf("%s\n %d\n %f",s2.name,&s2.age,&s2.marks);
	printf("%s\n %d\n %.2f\n",s2.name,s2.age,s2.marks);
	int avg=0;
//	printf("Avg:");
	avg=s1.marks+s2.marks/2;
	printf("%d",avg);
	
	
	
}
