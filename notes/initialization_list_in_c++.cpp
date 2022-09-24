#include<iostream>
using namespace std;

class test {
		int a;
		int b;
	public:
		//test(int i, int j):a(i),b(j) { 	//--> This is the initialization list in c++
		//test(int i, int j):a(i+b),b(j) { 	//--> This will throw 
		//error as we have declare a first so the variable of a will
		//get initialize first and tat that time the value of b 
		//is not with us cause the garbage value
		test(int i, int j):a(i),b(j) { 	//-->
			cout<<"Constructor called"<<endl
			    <<" the value of a is "<<a<<endl
			    <<"and the value of b is "<<b<<endl;
		}
};

int main() {
	test a(3,4);


	return 0;
}

