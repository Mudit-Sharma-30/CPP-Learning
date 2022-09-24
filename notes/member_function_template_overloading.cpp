#include<iostream>
using namespace std;

template <class t1>
class harry {
	public:
		int data;
		harry(t1 a ) {
			data = a;
		}

		void display ();
//		void display(){
//			cout<<"The value of data is "<<data<<endl;
//		}
};

//*************************************************************************************************
// 								DEFINING THE FUNCTION OUTSIDE THE CLASS
//								---------------------------------------
template <class t>
void  harry <t> :: display() {
	cout<<"The value of data is "<<data<<endl;
}

//*************************************************************************************************
// 									FUNCTION OVERlOADING WITH TEMPLATE
//									----------------------------------


//	ALWAYS THE EXACT MATCH GET PRINT FIRST

void func(int a ) {
	cout<<"I am first func "<<a<<endl;
}

template <class T>
void func1(T a) {
	cout<<"I am temp func "<<a<<endl;
}
int main() {

	harry <int> h(5.7);
//	harry <float> h(5.7);
//	harry <char> h('c');
	cout <<h.data<<endl;
	h.display();

	func(4); // Exact match will always be print first if wo overloading function are present there.
	func1(4);
	return 0;
}

