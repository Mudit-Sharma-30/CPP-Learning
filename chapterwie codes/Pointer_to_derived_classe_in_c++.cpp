#include<iostream>
using namespace std;

class BaseClass {
	public:
		int var_base;
		void Display() {
			cout<<"Display Baseclass Variable var1 :- "<<var_base<<endl;
		}

};

class DerivedClass:public BaseClass {
	public:
		int var_derived;
		void Display() {
			cout<<"Display Baseclass Variable var1 :- "<<var_base<<endl;
			cout<<"Display Derivedclass Variable var1 :- "<<var_derived<<endl;
		}


};

int main() {

	BaseClass * Base_class_pointer;  	//--> pointer to the class baseclass

	BaseClass obj_base;
	DerivedClass obj_derived;

	Base_class_pointer = &obj_derived; 	//-->  base class pointer pointing to the object of the derived class


	Base_class_pointer->var_base = 25;	// -->Valid
	// Base_class_pointer->var_derived = 25; // Not Valid


	Base_class_pointer->Display();		//-->  This will run the function of the base class


	cout<<endl;
	//obj_derived.Display();				//-->  derived class object\ 


	DerivedClass * derived_class_pointer;

	derived_class_pointer = &obj_derived;

	derived_class_pointer -> var_base = 32;	//--> Derived class pointer can acess to the variable of the base class
	derived_class_pointer -> var_derived = 12;
	derived_class_pointer ->Display();
	return 0;
}

