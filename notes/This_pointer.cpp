#include<iostream>
using namespace std;

class A {
		int a;
	public:
		/*
		void SetData(int a){
			this->a=a;
		}
		*/
		A & SetData(int a) {
			this->a = a;
			return *this; 	//-> this will return object type variable
		}

		void GetData() {
			cout<<"The value of a is "<<a<<endl;
		}
};

int main() {
	A a;
	a.SetData(4).GetData(); // -> As a.setData is returning object type varable hence
	// we can directy use this way.
	a.GetData();
	return 0;
}

