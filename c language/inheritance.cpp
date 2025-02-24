/*#include<iostream>
using namespace std;
class Father{
	protected:
string surname="Khanijo";	
};
class Son1:Father{
	string name= "xx";
	public:
		void show(){
			cout<<name<<" "<<surname<<endl;
		}
};
class Son2:Father{
	string name="nn";
	public:
		void display(){
			cout<<name<<" "<<surname<<endl;
};
 main(){
	Son1 obj;
	Son2 obj2;
	obj.show();
	obj2.display();
}*/



/*
// single inheritance
#include<iostream>
using namespace std;
class base{
	protected:
		int a,b;
		public:
			void input(){
				cout<<"enter a number"<<endl;
				cin>>a>>b;}
				
				
//			void show(){
//				cout<<a<<" "<<b<<endl;
//			}
};
class derive:public base
{
	private :
		int m,n;
		public:
			void getdata(){
				cout<<"enter values";
				cin>>m>>n;}
				
				void display(){
					cout<<m<<" "<<n<<endl;
					cout<<a<<" "<<b<<endl;
				}
				
			};
int main(){
//	base ob;
	derive ob1;
	ob1.input();
	//ob1.show();
	
	ob1.getdata();
	ob1.display();
}*/

/*
// hybrid inheritance: this is called diamond prblm

#include<iostream>
using namespace std;
class A{
	int n;
	public:
		void input(){
			cout<<"enter value"<<endl;
			cin>> n ;
		}
		void show(){
			cout<<n<<endl;
		}
};
class B: virtual public A{
	
};
class C:virtual public A{
	
};
class D: public B,public C{
	
};
int main(){
	A ob;B ob1;C ob2;D ob3;
	ob.input();
	ob.show();
	
	ob1.input();
	ob1.show();
	
	ob3.input();// here clas D doesnt access B and C so ambigous prblm occur, so use virtual  
	ob3.show();
}*/



// how to ambiguity occur and resolve


// abstract classs 
/*
#include<iostream>
using namespace std;
class A{
	public:
		virtual void show()=0;
		void disp(){
			cout<<"hello"<<endl;
		}
		
};
class B:public A{
	public:
		void show(){
			cout<<"hiii";
		}
};
int main(){
A *ptr;     B obj;
ptr=&obj;
//B obj;
ptr->disp();
}*/



/*
// virtual distructor
#include<iostream>
using namespace std;
class base{
	public:
	virtual	~base(){
		cout<<"base class"<<endl;	
		}
		
};
class derive:public base{
	~derive(){
		cout<<"Derive class";
	}
};
int main(){
	base *ptr=new derive;
	delete ptr;
}*/




#include<iostream>
using namespace std;
class A{
	public:
void print(){
	cout<<"Class A"<<endl;
}
};
class B:public A{
	public:
		void print(){
			cout<<"inside class B";
		//	A::print();
		}
};
int main(){
	B aa;
	aa.print();
	aa.A::print();
}
