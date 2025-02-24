class A{
    int x;
    public:
    A(int x=0):x(x){
	}
    void display(){
        cout<<x<<endl;
    }
};
class B:public A{
    int x;
    public:
    B(int x=0):A(x){}
    void display(){
        cout<<x<<endl;
    }
};
int main() {
	// your code goes here
	B obj;
	obj.display();
	B *obj1 =new B();
	obj1->display();
	A* obj2=new B(10);
	obj2->display();
}
