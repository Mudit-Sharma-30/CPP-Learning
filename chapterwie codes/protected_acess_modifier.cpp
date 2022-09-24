#include<iostream>
using namespace std;

class base {
	protected:
		int a;	// we want it to be private too but want to allow inheritance
	private:
		int b; //  we want to be private


};

//------------------------------------------------------------------------


class Derived :	protected base {



};

//------------------------------------------------------------------------

int main() {
	base b;
	Derived d;

	cout<<d.a;// not poosible as it is proyected in base as well as protected calss


	return 0;
}

