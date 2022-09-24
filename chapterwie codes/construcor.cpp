//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include<iostream>
using namespace std;

class complex {
		int a ,b;
	public:
		complex(void); 							// decalaration of the constructor

		void PrintNumber () {
			cout<<" The complex number is "<<a <<" + "<<b<<"i"<<endl;

		}
};

complex :: complex(void) {
	a= 100;
	b=89;
}

int main() {

	complex c;
	c.PrintNumber();

	return 0;
}

