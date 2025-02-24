
//#include<stdio.h>
//int main(){
//	int n;
//	int sum=0;
//	printf("enter a number");
//	scanf("%d",&n);
//while(n>0){
//		int r=n%10;
//		if(r%2==0){
//			sum=sum+r;
//			}
//			n=n/10;
//		//	printf("%d",sum);	
//	}
//		printf("%d",sum);
//}



////#include <stdio.h>
////    int main()
////    {
////        int i = 0;
////        while (i < 3)
////            i++;
////        printf("%d\n",i);
////    }
//
//
//
////#include<stdio.h>
////int main(){
////int arr[5]={2,4,7,8,5};
////int i;
////int result;
////for(i=0;i<5;i++){
////	if(i%2==0){
////	result=arr[i]+2;
////	}
////else{
////result=	arr[i]*2;
////}
////printf("%d\n",result);
////}
//////printf("%d",result}
//
//
//
////#include<stdio.h>
////int main(){
////	int i=0;
////char arr[]="helloo\0";
////while(arr[i]!='\0'){
////
////printf("%s",arr[i]);
////i++;}}
////#include<stdio.h>
////int main(){
////	char str[20];
////	printf("Input the string:");
////	fgets(str,20,stdin);
////	printf("%s",str);
//////}
////
////
////#include<stdio.h>
////#include<string.h>
////int main(){
////	char str[40];
////printf("enter a string");
////fgets(str,40,stdin);
////printf("%s",str)
////}
//
////#include<stdio
////#include<string.h>
////int main(){
////	char str[30];
////	printf("enter a string");
////	fgets(str,30,stdin);
////	int size=0;
////	int i=0;
////
////	while(str[i]!='\0'){
////		size++;
////		i++;
////	}
////	printf("%d",size-1);
////	
////	
////}
//
////#include<stdio.h>
////#include<string.h>
////int main(){
////	int size=0;
////	int k=0;
////	int i=0;
////	char str[50];
////	printf("enter a string");
////fgets(str,50,stdin);
////while(str[k]!='\0'){
////	size++;
////	k++;
////	
////	
////}
////for(i=size-1;i>=0;i--){
////printf("%c",str[i])	;
////}
////
////}
//
////#include<stdio.h>
////#include<string.h>
////int main(){
////	char str[40];
////	int size=0;
////	int k=0;
////	int i=0;
////	printf("enter a string");
////	fgets(str,40,stdin);
////	while(str[k]!='\0'){
////		size++;
////		k++;
////	}
////	printf("The reverse:\n");
////for(i=size-1;i>=0;i--){
////	printf("%c",str[i]);
////}
////}
//
////#include<stdio.h>
////#include<string.h>
////int main(){
////
////char str[]="college wallah";
////char* ptr=str;
////*ptr="physics wallah";
//////ptr[0]='D';
////printf("%s",ptr);}
//
////#include<stdio.h>
////#include<string.h>
////int main(){
////	int i=0,size=0;
////	char s1[]="physics wallah";
////	while(s1[i]!='\0'){
////		//printf("%s",size-1);
////		size++;
////		i++
////			printf("%d",size-1);
////	}
////	char s2[]="physics wallah";
//////	s2[0]='R';
////	printf("%p\n",s1);
////	printf("%p\n",s2);
////}
//
//
//////#2)#include <stdio.h>
////int main()
////{
////float p = ‘b’;
//// printf(“%.2f”, p); 
//// return 0;
////}
////#include<stdio.h>
////int main()
////{
////int x=10;
////do
////{
////printf("%d ", x);
////}
////while(x++ < 15);
////return 0;
////}
////#include <stdio.h>
////int main() {
////int array[] = {0, 2, 4, 6, 7, 5, 3}; 
////int n, result = 0; 
////for (n = 0; n < 6; n++);
////{ 
////result += array[n];
//// }
////result += array[n];
////printf("%d", result); 
////return 0; 
////}
//
//
//
//#include<stdio.h>
////#include<string.h>
////int main(){
////	int size=0,k=0,i=0;
////char str[40];
////printf("enter a string");
////fgets(str,40,stdin);
////while(str[k]!='\0'){
////size++;
////k++;
//////printf("%d",size-1);
////}
////for(i=size-1;i>=0;i--){
////	
////	printf("%c",str[i]);
////}
////}
//
////#include<stdio.h>
////#include<string.h>
////int main(){
////char* s1="college wallah";
////char* s2;
////s1=s2;
////printf("%s\n",s1);	
////printf("%s\n",s2);
////}
//
////// insert new line to given position
////#include<stdio.h>
////#include<string.h>
////int main(){
////	char[20]="college ";
////	printf("%s\n",str);
////	for(int i=6;i>=2;i--){
////		str[i+1]=str[i];
////	}
////str[2]='i';
////printf("%s",str);
////	
////}
//
////#include<stdio.h>
////int main(){
////	int arr[4]={2,3,4,7};
////	int i;
////	for(i=0;i<4;i++){
////		if(i%2==0){
////			arr[i]=arr[i]+10;
////		}
////		else{
////			arr[i]=arr[i]*2;
////		}
////		printf("%d\n",arr[i]);
////	}
////}
//
//
//#include<stdio.h>
//int main(){
//	int arr[5]={4,6,2,8,9};
//	int i;
//	int x;
//	printf("enter x");
//	scanf("%d",&x);
//	int gre_ele=arr[0];
////	int max_ele=arr[0];
//	for(i=0;i<5;i++){
//		if(arr[i]>x){
//			gre_ele=arr[i];
//		}
//		printf("greater ele is %d\n",gre_ele);
//	}
//		//printf("max ele is %d",max_ele);
//}

//
//#include<stdio.h>
//struct employees{
//	int id;
//	int age;
//	int salary;
//};
//int main(){
//	int n,i;
//	printf("Enter number of employees");
//	scanf("%d",&n);
//	struct employees s1[n];
//	for(i=0;i<n;i++){
//		scanf("%d %d %d",&s1[i].id,&s1[i].age,&s1[i].salary);
//	}
//	int highest=s1[0].salary;
//	int max=0;
//	for(i=0;i<n;i++){
//		if(highest<s1[i].salary){
//			highest=s1[i].salary;
//			max=i;
//		}
//	}
//	printf("Highest salary:%d with salary %d",s1[max].id,s1[max].salary);
//}
//
//
//
//
//
//
   
   
   
   
   
//#include<stdio.h>
//struct time{
//	int hour;
//	int min;
//	int sec;
//	
//};
//int main(){
//	struct time t1,t2,t3;
//	scanf("%d %d %d",&t1.hour,&t1.min,&t1.sec);
//		scanf("%d %d %d",&t2.hour,&t2.min,&t2.sec);
//		t3.hour=t1.hour+t2.hour;
//		t3.min=t1.min+t2.min;
//		t3.sec=t1.sec+t2.sec;
//		if(t3.sec>=60){
//			t3.sec-=60;
//			t3.min++;
//		}
//		if(t3.min>=60){
//			t3.min-=60;
//			t3.hour++;
//		}
//		printf("%d:%d:%d",t3.hour,t3.min,t3.sec);
//}
//
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
//
//
//
//
//
//
//
//
//
//
//

 
 
//#include<stdio.h>
//struct employees{
//	int id;
//	int age;
//	int salary;
//};
//int main(){
//	int i,n;
//	printf("enter n");
//	scanf("%d",&n);
//	
//	struct employees s1[n];
//	for(i=0;i<n;i++){
//		scanf("%d%d%d",&s1[i].id,&s1[i].age,&s1[i].salary);
//	}
//	int highest_salary=s1[0].salary;int max=0;
//	for(i=0;i<n;i++){
//		if(highest_salary<s1[i].salary){
//			highest_salary=s1[i].salary;
//			max=i;
//		}
//	
//	}
//		printf("%d\n",s1[max].id);
//			printf("%d\n",s1[max].age);
//				printf("%d\n",s1[max].salary);
//		
//		
//}
//
//




//count vowel amd cnsonent
//#include<stdio.h>
//int main(){
//char str[30];
//int i,v=0,c=0;
//fgets(str,30,stdin);
//while(str[i]!='\0')	{
//	if(str[i]=='A'|| str[i]=='E'|| str[i]=='I'|| str[i]=='O'|| str[i]=='U'|| str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'){
//	v++;
//}
//	
//else if((str[i]>='A'&& str[i]<='Z') || (str[i]>='a'&& str[i]<='z'))	{
//	c++;
//}
//
//i++;	
//	}
//	printf("%d\n%d",v,c);}
//




////reverse of string:-
//#include<stdio.h>
//int main(){
//char str[30];
//int i,k;
//scanf("%s",str);
//
//while(str[k]!='\0'){
//	k++;
//}
//for(i=k-1;i>=0;i--){
//	printf("%c",str[i]);	
//	
//}
////printf("s",str);
//}





//// toggle sring:-
//#include<stdio.h>
//int main(){
//	char str[40];
//scanf("%s",str)	;
//int i=0;
//while(str[i]!='\0'){
//	if(str[i]>='A'&& str[i]<='Z'){
//	str[i]+=32;
//	
//		
//		
//	}
//}
//}
//
//




//TOGGLE STRING
//#include<stdio.h>
//int main(){
//	char string[30];
//	fgets(string,30,stdin);
//	int i=0;
//	while(string[i]!='\0'){
//		if(string[i]>='A' && string[i]<='Z'){
//			string[i]+=32;
//		}
//		else{
//			string[i]-=32;
//		}
//		printf("%c",string[i]);
//		i++;
//	}
//	//printf("%s",string);
//}




////REVERSE OF STRING
//#include<stdio.h>
//int main(){
//char str[50];
//fgets(str,50,stdin);
//int i=0;
//int k=0;
//while(str[k]!='\0'){
//	k++;
//	
//}
//for(i=k-1;i>=0;i--){
//printf("%s",str);	
//}
//	
//}





#include<stdio.h>
#include<string.h>
int main(){
char string[50];
char x[50];
fgets(string,50,stdin);
strcpy(x,string);
int k;
int i;
while(string[k]!='\0'){
	k++;
}
for(i=k-1;i>=0;i--){
	printf("%c",string[i]);
}
if(strcmp(x,string)==0){
	printf("palindrome");
}
else
printf("not");
}

