/*#include<iostream>
using namespace std;
class A {
	private:
		int a=10,b=20;
		public:
			void show(){
				cout<<a<<" "<<b<<endl;
			}
			friend class B;
		
		
};
class B{
	public:
		void add(A r){
			int add=r.a+r.b;
			cout<<add<<endl;
		}
};
main(){
	A obj;B obj2;
	obj. show();
	obj2. add(obj);
	
}*/


/*
#include<iostream>
using namespace std;
class B;
class Ann{
	private:

	int money=10;
	friend void W(Ann,B);
};
class B{
	private:
	int money= 20;
		friend void W(Ann,B);
};
void W(B r1,Ann r2){
	int add=r1.money+r2.money;
}
int main(){
	Ann obj;
	B obj2;
	W(obj2,obj);
}*/



//is a friend fn return a value or not

/*#include<iostream>
using namespace std;
class complex{
	private:
		float x;
		float y;
	public:
		void input(float m,float n){
			x=m;
			y=n;
		}
		void show(){
			cout<<x<<endl;
			cout<<y<<endl;
		}
		friend complex sum(complex c1,complex c2);
	
};
complex sum(complex c1,complex c2 ){
	complex c3;
	c3.x=c1.x+c2.x;
	c3.y=c1.y+c2.y;
	return c3;
}
int main(){
	complex a,b,c;
	a.input(20,10.5);
	b.input(10,5.1);
	a.show();
	b.show();
	c=sum(a,b);
	c.show();
	
}*/




// static data member in c++
/*#include<iostream>
using namespace std;
class A
{
	private:
	int a;
	static int b;
	public:
		A(int x,int y){
			a=x;
			b=y;
		}
		void show(){
			cout<<a<<" "<<b;
		}
	static void disp(){
	//disp is member fn
		cout<< b  <<endl; // static m only static data memer access honge
	}
	
};
int A::b=0;// int class:: b=0 means b is static 
int main(){
	A obj(10,20),obj2(100,200);;
	//obj2(100,200);
	obj.show();
	obj2.show();
	A::disp();// data member ko access krna without obj
	obj.show();
}*/


// unary operator
#include<iostream>
#include<conio.h>
class demo{
	private:
		int a,b;
		public:
			demo(int x,int y){
				a=x;
				b=y;
				
			}
			void show()
			{
				cout<<a<<" "<<b;
			}
	void operator -(){
		a=-a;
		b=-b;
	}	
	
};
void main(){
	demo obj(-10,20);
	obj.show;
	-obj;
	obj.show();
	getch();
	
}



