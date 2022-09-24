#include<iostream>
using namespace std;

class BaseClass {
	public:
		int var_base=1;
		virtual void Display() {
			cout<<"1. Display Baseclass Variable var1 :- "<<var_base<<endl;
		}

};

class DerivedClass:public BaseClass {
	public:
		int var_derived=2;
		void Display() {
			cout<<"2. Display Baseclass Variable var1 :- "<<var_base<<endl;
			cout<<"2. Display Derivedclass Variable var1 :- "<<var_derived<<endl;
		}


};

int main() {
	BaseClass *base_cass_pointer;

	BaseClass obj_base;
	DerivedClass obj_derived;

	base_cass_pointer = &obj_derived;
	base_cass_pointer->Display() ;

	return 0;
}

