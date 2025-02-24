/*#include<iostream>
using namespace std;
class Hero{
	public:
//	char name(100);
	//int health;
	//char level;
	
};
int main(){
	Hero h1;
//	h1.health=30;
	//cout<<h1.health<<endl;
	cout<<sizeof(h1)<<endl;
	
}*/


/*#include<iostream>
using namespace std;
class hero{
	public:
		char name[100];
		int health;
		char level;
		
};
int main(){
	hero h1;
	h1.health=44;
cout<<h1.health<<endl;

}*/



/*jb hum kisi cheej ko privte krte h or hume usse function k bhar access krna hota h to gets an set use hota h
#include<iostream>
using namespace std;
class hero{
	private:
		int health;
	public:
		char level;


int gethealth(){
	return health;
}
char getlevel(){
	return level;
}
void sethealth(int h){
	health= h;
}
void setlevel(char ch){
	level=ch;
}

};
int main(){
//static allocation
	hero h1;
	h1.sethealth(90);
	cout<<h1.gethealth()<<endl;}*/
	
//dynamically allocation
/*#include<iostream>
using namespace std;
class hero{
public:
int health;
char level;
};
int main(){
	//static allocation 
hero a;
a.level='S';
cout<<a.level<<endl;
// dynamically allocation
hero *b=new hero;
(*b).level='R';
cout<<(*b).level<<endl;
cout<<b->level<<endl;
}*/


//
//#include<iostream>
//using namespace std;
//class hero{
//	public:
//	int health;
//	char level;
//	hero(){
//	}
//	
//hero(int health){
//this->health =health;	
//}
//};
//int main(){
//	hero a;
//a.health=20;
//	cout<<a.health<<endl;
//}
//



/*#include<iostream>
using namespace std;
class hero{
	public:
		int health;
		char level;
	static	int timetocmplt;
		 hero(){
		 }
		
	hero(int health,char level){
		this->health=health;
		this->level=level;	
	}
	// destructor
	~hero(){
		cout<< "destructor called "<<endl;
	}
};
// initialise static member :- means bina object create kie bina print krana value ko
int hero::timetocmplt=5;
int main(){
	cout<< hero::timetocmplt<<endl;
	
	
	
	
	//statically
//	hero a;
//	//dynamically
//	// manually constructor call
//	hero *b=new hero();
//	delete b;

}*/




//#include<iostream>
//using namespace std;
//class circle{
//	private:
//		int radius;
//		
//};
//



/*#include<iostream>
using namespace std;
class circle{
	public:
	double radius;
	
	double area(){
		return 3.14*radius*radius;}
	
};
int main(){
	circle obj;
	obj.radius=5.5;

	cout<<obj.radius<<endl;
	cout<<obj.area()<<endl;
}*/



#include<iostream>
using namespace std;
class circle{
	private:
		double radius;
	public:
	void area(double r){
		radius=r;
		double a= 3.14*radius*radius;
	cout<<radius<<endl;
	cout<<a<<endl;
	}
	
};
int main(){
circle obj;
obj.area(1.5)	;
}
