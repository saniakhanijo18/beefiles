#include<iostream>
#include<stdexcept>
using namespace std;
main(){
	double bal=1000.0;
	try{
		double amt;
		//deposit
	cout<< "enter deposit amount";
	cin>>amt;
	if(amt<=0){
		cout<<"Invalid Deposit amount"<<endl;
	}
	bal=bal+amt;
	cout<<"Available amount: "<<bal<<endl;
	//withdrawn
		cout<< "enter withdrawn amount";
	cin>>amt;
	if(amt<=0){
		cout<<"Invalid withdrawn amount"<<endl;
	}
	if(amt>bal){
		cout<<"Insuffient fund: "<<bal;
	}
	bal=bal-amt;
	cout<<"Available amount: "<<bal<<endl;
			
	}
	catch(exception e){
		cout<<e.what();
		
	}
}
