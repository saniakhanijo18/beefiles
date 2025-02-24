//#include<iostream>
//using namespace std;
//inline int product(int a,int b){
////not recommended to use below lines with inline functions
////	static int c=0;// this excute only once
////	c=c+1;// next time this function is run,the value of c will be retained 
//
//	return a*b;
//}
//
//
//int main(){
//	int a,b;
//	cout<<"enter value of a,b"<<endl;
//	cin>>a>>b;
//	cout<<"the product of a ,b is"<<product(a,b);
//	cout<<"the product of a ,b is"<<product(a,b);
//	cout<<"the product of a ,b is"<<product(a,b);
//	cout<<"the product of a ,b is"<<pr oduct(a,b);
//	cout<<"the product of a ,b is"<<product(a,b);
//	
//}
// Macros piece of code jo replace kr skte h ek hi bari m define function m.. bar bar chng n krna pdega
//#include<iostream>
//using namespace std;
//#define PI 3.14
//int main(){
//	int r=9;
//	double area= PI *r* r;
//	cout<<"area is"<< area<<endl;



//}


// inline function are used to reduce function calls overhead
/*#include<iostream>
using namespace std;
void func(int a,int b){
	a++;
	b++;
	cout<<a<<b<<endl;
}
int main(){
	int a=1,b=5;
	func(a,b);
	return 0;
}*/

// Default argument

/*#include<iostream>
using namespace std;
void print(int arr[],int n,int start=0){
	for(int i=start;i<n;i++){
		cout<<arr[i]<<endl;
	}
}



int main(){
	int arr[5]={1,4,7,8,9};
	int size=5;
	
	print(arr,size);
	cout<<endl;
	print(arr,size,2);
}*/


// call by value and call by reference
//#include<iostream>
//using namespace std;
//// call by value make copy
////void swap(int a,int b){
////	int temp=a;
////	a=b;
////	b=temp;}
//// call by reference using pointers
//void swapPointer(int* a,int *b){
//int temp=*a;
//*a=*b;
//*b=temp;	
//	
//}
//
//int main(){
//	int x=4;
//	int y=5;
//	cout<<x<<y<<endl;
//	//swap(x,y);
//	swapPointer(&x,&y);// reference of address in memory
//	cout<<x<<y<<endl;
//}



// reference variable
#include<iostream>
using namespace std;
void swapReferenceVar(int& a,int& b){
	int temp=a;
	a=b;
	b=temp;
}
int main(){
	int x=9;
	int y=2;
	swapReferenceVar(x,y);
	cout<<x<<y<<endl;
}
