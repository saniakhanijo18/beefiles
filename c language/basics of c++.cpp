//#include<iostream>
//using namespace std;
//int main(){
//cout<<"namaste dunia" <<endl;
//}


//#include<iostream>
//using namespace std;
//int main(){
//	int a=123;
//	cout<<a<<endl;
//	char b='v';
//	cout<<b<<endl;
//	bool b1=true;
//	cout<<b1<<endl;
//	float f=1.2;
//	cout<< f<<endl;
//	int size=sizeof(f);
//	cout<<"size of f is:"<<size<<endl;
//	
////}
//
//#include<iostream>
//using namespace std;
//int main(){
////	int a ='A';
////	cout<< a <<endl;
//char ch=123456;
//cout<<ch<<endl;
//}

//unsigned number only store positive no.
//integer range 2^32 to 2^32-1

//#include<iostream>
//using namespace std;
//int main(){
//	unsigned int a= 123;
//	cout<< a << endl;
//	signed int b= -123;
//	cout<< b << endl;
//}

//int/int=int
//float/int=float
//example int a=float/int so overall ans in int


//#include<iostream>
//using namespace std;
//int main(){
//	int a=3;
//	int b=4;
//	bool f=(a==b);
//	cout<<f<<endl;

//clases 

/*#include<iostream>
using namespace std;
class Student{
	public:
	string name;
	int rno;
	float gpa;
};
int main(){
	Student x;
	x.name ="Sania";
	//x.rno=23;
	cin>>x.rno;
	x.gpa=7.4;
	Student y;
	y.name ="Samya";
	y.rno=29;
	y.gpa=8.4;
	cout<<x.name<<" "<< x.rno<<" "<<endl;
	cout<<y.rno<<" "<<y.name<<endl;
}*/

//
//

//
/*#include<iostream>	
using namespace std;
class car{// here car is a class
	public:
	string name;
	int price;
	int seat;
	int bhp;
	
	
};
void print(car c){
	cout<<c.name<<" "<<c.price<<" "<<c.seat<<" "<<c.bhp<<endl;
}
int main(){
	car c1;//c1 is object
	cin>>c1.name;
	c1.price=100000000;//these r attributes
	c1.seat=5;
	c1.bhp=30;
	car c2;//c1 is object
	cin>>c2.name;
	c2.price=1000;//these r attributes
	c2.seat=5;
	c2.bhp=90;
	 car c3;//c1 is object
	cin>>c3.name;
	c3.price=8000000;//these r attributes
	c3.seat=5;
	c3.bhp=80;
	
	 
	print(c1);
	print(c2);
	print(c3);}*/
	


// constructors are like functions:-
/* #include<iostream>
using namespace std;
class Student{
	public:
	string name;
	int rno;
	float gpa;

Student(string s,int r,float g){

	name=s;
	rno=r;
	gpa=g;}
};
int main(){
	Student x("Sania",26,8.3);
/*	x.name ="Sania";
	//x.rno=23;
	cin>>x.rno;
	x.gpa=7.4;*/
//	Student y;
//	y.name ="Samya";
//	y.rno=29;
//	y.gpa=8.4;
//	cout<<x.name<<" "<< x.rno<<" "<<endl;
	//cout<<y.rno<<" "<<y.name<<endl;
//}


//#include<iostream>
//using namespace std;
//class car{
//	public:
//	string name;
//	int price;
//	int seats;
//	
//car(string n,int p,int s){
//	name=n;
//	price=p;
//	seats=s;
//}
//};
//int main(){
////	car c1("ok",12000,3);
//	car c1;
//	c1.name="maruti";
//	c1.price=120000;
//	c1.seats=5;
//	cout<<c1.name<<" "<<c1.seats<<" "<<endl;
//};


// default constructor
/*#include<iostream>
using namespace std;
class student{
	public:
	string name;
	int rno;
	float marks;
student(){//default constructor
}
	
student(string n,int r){
	name=n;
	rno=r;
	//marks=m;
}
};
int main(){
	student s("sani",24);
	s.rno=90;
	s.marks=34.9;
	student s1;
	s1.name="aaa";
	s1.rno=2;
	s1.marks=38;
	cout<< s.name<<s.rno<<s.marks<<endl;
	cout<< s1.name<<s1.rno<<endl;
	
}*/

// multiple constructors
/*#include<iostream>
using namespace std;
class student{
	public:
	string name;
	int rno;
	float marks;
student(){//default constructor
}
	
student(string n,int r){
	name=n;
	rno=r;
	//marks=m;
}
student(string n,int r,float m){
	name=n;
	rno=r;
	marks=m;
}
};
int main(){
	student s("sani",24);
	s.rno=90;
	s.marks=34.9;
	student s1;
	s1.name="aaa";
	s1.rno=2;
	s1.marks=38;
	student s2("rd",34,4.9);
	student s3=s;
	s3.name="abc";//deep copy
	 student s4(s1);// call kraya to ye copy constructor
	 s4.name="uuu";// deep copy
	 // both 2 r way to create deep copy
	cout<< s.name<<s.rno<<s.marks<<endl;
	cout<< s1.name<<s1.rno<<endl;
	cout<< s2.name<<s2.rno<<s2.marks<<endl;
	cout<< s3.name<<s3.rno<<s3.marks<<endl;
	cout<< s4.name<<s4.rno<<s4.marks<<endl;
	
}
*/

// this keyword

#include<iostream>
using namespace std;
class cricketer{
	public:
	string name;
	int run;
	
cricketer(string name,int run){

	this->	name=name;//this is udes when we have same variable 
	this->	run=run;}
};
int main(){
//	cricketer c1("virat",1000);
//	cricketer c2("Rohit ",3000);
	//c1.name="virat kohli";
		c1.run=100;
		
cout<<c1.name<<" "<<c1.run<<" "<<endl;
cout<<c2.name<<" "<<c2.run<<" "<<endl;
	
}


/*
int main(){
	cricketer c1("abc",45,98.4);
	cricketer c2("bgc",89,67.4);
//	cout<<c1.name<<" "<<c1.runs<<" "<< c1.avg<<endl;
//cout<<c2.name<<" "<<c2.runs<<" "<<c2.avg<<endl;
//print(c1);
//print(c2);

c1.print();
c2.print();
}*/

//object pointers
/*#include<iostream>
using namespace std;
class cricketer{
	public:
	string name;
	int run;
	float avg;
cricketer(string name,int run,float avg){

	this->	name=name;//this is udes when we have same variable 
	this->	run=run;
	this-> avg=avg;}
};
void change(cricketer* c){
c->avg=67.9;//(*c).avg=77.2;//it update avg

}
int main(){
	cricketer c1("virat",1000,54);
	cricketer c2("Rohit ",3000,98);
//	cout<<c1.avg<<endl;
//	change(&c1);
//		cout<<c1.avg<<endl;
//	
	
	cricketer*p1=&c1;
	cout<<p1->.run<<endl;//c1.runs
	p1->.avg=77.5;//c1.avg=77.5
	cout<<c1.avg<<endl;
//		c1.name="virat kohli";
//		c1.run=100;
//		
//cout<<c1.name<<" "<<c1.run<<" "<<endl;
//cout<<c2.name<<" "<<c2.run<<" "<<endl;
	
}*/

// dynamic allocation
/*#include<iostream>
using namespace std;
class cricketer{
	public:
		string name;
		int runs;
		float avg;
	cricketer(string name,int runs,float avg){
		this->name=name;
		this->runs=runs;
		this->avg=avg;
	}	
		
};
int main(){
	cricketer c1("virat",25000,55.2);
	cricketer *c2=new cricketer("rohit",15000,47.8);

//int x=7;
//int *ptr=&x; 
//cout<<*ptr<<endl;

//int *ptr=new int(4);
//cout<<*ptr<<endl;
cout<<c1.name<<" "<<c1.runs<<endl;
cout<<c2->name<<" "<<c2->runs<<endl;
}*/

// Vector:-
//#include<iostream>
//using namespace std;
//class vector{
//	public:
//	int size;
//	int caacity;
//	int* arr;
//	vector(){// default constructor
//	size=0;
//	capacity=1;
//	arr=new int[1];	
//	}
//	void add(int ele){ 
//	if(size==capacity){
//		
//	}
//		 
//	}
//	
//};
//
//int main(){
//	vector v1();
//	v1.add(10);
//
//
//}
//
//
//
//
//	
//
//
//

