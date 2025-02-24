/*#include<iostream>
using namespace std;
void cq1(int n){
	try{
		if(n<0){
			throw -1;
		}
		else if(n==0){
			throw string("ZERO");
		}
		else{
			throw 1.0;
		}
	}
	catch(int){
		cout<<"NEGATIVE"<<endl;
	}
	catch(string){
		cout<<"ZERO"<<endl;
	}
	catch(double){
		cout<<"POSITIVE"<<endl;
	}
}
int main(){
	int n;
	cin>>n;
	cq1(n);
}*/


/*
#include<iostream>
#include<string>
using namespace std;
void validatePassword(string password){
	bool hasDigit=false;
	if()
}*/


#include<iostream>
#include<string>
using namespace std;
void validPassword(string password){
	bool hasdigit=false;
	if (password.length()<6){
	throw 'd';
	}
	for(char ch : password){
		if(isdigit(ch)){
			hasdigit=true;
		}
		if(!hasdigit){
			throw's';
		}
	}
}
int main(){
	string username ,password;
	cin>>username,password;
	try{
		validpassword(password);
		cout<<"Correct"<<endl;
	}
	catch(char e){
		d=e;
		cout<<"too short"<<endl;
		
	}
	catch(char f){
		s=f;
		cout<<"No digit"<<endl;
	}
}

