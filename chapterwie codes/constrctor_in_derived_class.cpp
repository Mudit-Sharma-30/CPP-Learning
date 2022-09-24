#include<iostream>
using namespace std;

class Base1 {
		int data1;
	public:
		Base1(int i) {
			data1=i;
			cout<<"Base1 class constructor called"<<endl;
		}

		void PrintdataBase1() {
			cout<<"The value of data1 is "<<data1<<endl;
		}

};


class Base2 {
		int data2;
	public:
		Base2(int i ) {
			data2=i;
			cout<<"Base2 class constructor called"<<endl;
		}

		void PrintdataBase2() {
			cout<<"The value of data2 is "<<data2	<<endl;
		}

};

class Derived:public Base1, public Base2 {
		int Derived1,Derived2;
	public:
		Derived(int a , int b ,int c , int d):Base1(a) , Base2(b) {
			Derived1 = c;
			Derived2 = d;
			cout<<"Derived class constructor called"<<endl;

		}

		void printDataDerived() {
			cout<<"The value of Derived1 is "<<Derived1<<endl;
			cout<<"The value of Derived2 is "<<Derived2<<endl;
		}
};

int main() {

	Derived Mudit(1,2,3,4);
	Mudit.PrintdataBase2();
	Mudit.PrintdataBase1();
	Mudit.printDataDerived();

	return 0;
}

