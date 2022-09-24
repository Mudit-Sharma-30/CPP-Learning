#include<iostream>
using namespace std;

/*

Syntax template with multiple parameter:-

	template <class t1, class t2>

	class <classname> {


	};


*/

//class myClass{
//	public:
//		int data1;
//		char data2;
//
//		void display(){
//			cout<<this->data1>>this->data2;
//		}
//};

template <class t1, class t2>
class myclass {
	public:
		t1 data1;
		t2 data2;

		myclass(t1 a , t2 b) {
			data1 = a;
			data2 = b;
		}

		void display() {
			cout<<"The object with template t1 is "<<this->data1<<" and The object with template t2 is "<<this->data2;
		}
};

int main() {

	myclass <int , float> obj(1,1.8);

//	myclass <int , char> obj(1,'b');
//	myclass <int , double> obj(1,4.9);
//	myclass <int , int> obj(9,4);

	obj.display();


	return 0;
}

