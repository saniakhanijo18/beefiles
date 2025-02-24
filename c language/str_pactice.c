//#include<stdio.h>
//struct student{
//	char name[30];
//	int age;
//	float marks;};
//	int main(){
//	
//		struct student s1,s2;
//		scanf("%s\n %d\n %f",s1.name,&s1.age,&s1.marks);
//	printf("%s\n %d\n %.2f",s1.name,s1.age,s1.marks);
//	scanf("%s\n %d\n %f",s2.name,&s2.age,&s2.marks);
//	printf("%s\n %d\n %.2f\n",s2.name,s2.age,s2.marks);
//	int avg=0;
//	printf("Avg:");
//	avg=(s1.marks+s2.marks)/2;
//	printf("%d",avg);
//	
//	
//	
//}



//#include<stdio.h>
//struct book{
//
//char title[30];
//char author[10];
//int price;
//};
//int main(){
//	struct book b1,b2,b3;
//	scanf("%s %s %d",b1.title,b1.author,&b1.price );
////	printf("%s\n %s\n %d",b1.title,b1.author,b1.price );
//	scanf("%s %s %d",b2.title,b2.author,&b2.price );
//	//printf("%s\n %s\n %d",b2.title,b2.author,b2.price );
//	scanf("%s %s %d",b3.title,b3.author,&b3.price );
////	printf("%s\n %s\n %d",b3.title,b3.author,b3.price );
//	struct book expensive;
//	if(b1.price>=b2.price && b1.price>=b3.price){
//		expensive=b1;
//	}
//	else if(b2.price>=b1.price && b2.price>=b3.price){
//		expensive=b2;
//	}
//	else{
//		expensive=b3;
//	}
//	struct book lowest;
//	if(b1.price<=b2.price && b1.price<=b3.price){
//		lowest=b1;
//	}
//	else if(b2.price<=b1.price && b2.price<=b3.price){
//		lowest=b2;
//	}
//	else{
//		lowest=b3;
//	}
//	printf("most expensive");
//	printf("title %s\n",expensive.title);
//	printf("author %s\n",expensive.author);
//	printf("price %d\n",expensive.price);	
//	printf("most lowest");
//	printf("title %s\n",lowest.title);
//	printf("author %s\n",lowest.author);
//	printf("price %d\n",lowest.price);	
//	
//}









//#include<stdio.h>
//struct book{
//
//char title[30];
//char author[30];
//int price;
//};
//int main(){
//	struct book b1,b2,b3;
//	fgets(b1.title,30,stdin);
//	fgets(b1.author,30,stdin);
//	scanf("%d",&b1.price );
//	scanf("%s %s %d",b2.title,b2.author,&b2.price );
//	//printf("%s\n %s\n %d",b2.title,b2.author,b2.price );
//	scanf("%s %s %d",b3.title,b3.author,&b3.price );
////	printf("%s\n %s\n %d",b3.title,b3.author,b3.price );
//	struct book expensive;
//	if(b1.price>=b2.price && b1.price>=b3.price){
//		expensive=b1;
//	}
//	else if(b2.price>=b1.price && b2.price>=b3.price){
//		expensive=b2;
//	}
//	else{
//		expensive=b3;
//	}
//	struct book lowest;
//	if(b1.price<=b2.price && b1.price<=b3.price){
//		lowest=b1;
//	}
//	else if(b2.price<=b1.price && b2.price<=b3.price){
//		lowest=b2;
//	}
//	else{
//		lowest=b3;
//	}
//	printf("most expensive");
//	printf("title %s\n",expensive.title);
//	printf("author %s\n",expensive.author);
//	printf("price %d\n",expensive.price);	
//	printf("most lowest");
//	printf("title %s\n",lowest.title);
//	printf("author %s\n",lowest.author);
//	printf("price %d\n",lowest.price);	
//	
//}







//#include<stdio.h>
//struct time{
//int hour;
//int min;
//int sec;};
//int main(){
//	struct time t1,t2,t3;
//scanf("%d %d %d ",&t1.hour,&t2.min);
//
//
//}
//};






#include<stdio.h>
struct circle{
	float radius;
	float perimeter;
	float area;
};
int main(){
	
	struct circle c1,c2;
	scanf("%f",&c1.radius);
	scanf("%f",&c2.radius);
	c1.perimeter=2*3.14*c1.radius;
	c2.perimeter=2*3.14*c2.radius;
	c1.area=3.14*c1.radius*c1.radius;
	c2.area=3.14*c2.radius*c2.radius;
		printf("the perimeter of circle 1 is:%f\n",c1.perimeter);
		printf("the perimeter of circle 2 is:%f\n",c2.perimeter);
		printf("the area of circle 1 is:%f\n",c1.area);
		printf("the area of circle 2 is:%f\n",c2.area);
}

