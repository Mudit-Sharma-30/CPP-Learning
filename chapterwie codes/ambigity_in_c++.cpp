#include<iostream>
using namespace std;

class Base1{
	public:
	void Greet(){
		cout<<"How are you"<<endl;
	}	
};

class Base2{
	public:
	void Greet(){
		cout<<"Kive a bhau"<<endl;
	}
};

class derived : public Base1,public Base2{
	int a;
	public:
		void Greet(){
			Base1::Greet();
		}
};

int main()
	{
 	Base1 base1obj;
 	Base2 base2obj;
 	base1obj.Greet();
 	base2obj.Greet();
 	
 	derived dobj;
 	dobj.Greet();
	return 0;
	}

