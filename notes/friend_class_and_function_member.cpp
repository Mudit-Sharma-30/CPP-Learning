#include<iostream>
using namespace std;

class complex;

class calculator {
	public:
		int add (int a , int b) {
			return (a+b);
		}
		int sumRealcomplex(complex ,complex );
		int sumcomplexcomplex(complex,complex );


};

class complex {
		int a,b;

		friend int calculator::sumRealcomplex(complex,complex);
		friend int calculator::sumcomplexcomplex(complex,complex);

	public:
		void SetNumber(int n1,int n2) {
			a=n1;
			b=n2;

		}

		void printNumber() {
			cout<<"Your number is "<<a <<" + "<<b<<"i"<<endl;
		}

};

int calculator::sumRealcomplex(complex o1,complex o2) {
	return (o1.a+o2.a);
}

int calculator::sumcomplexcomplex(complex o1,complex o2) {
	return (o1.b+o2.b);
}




int main() {

	complex o1,o2;
	o1.SetNumber(4,6);
	o2.SetNumber(9,6);

	calculator c1;
	c1.add(4,7);
	int result=c1.sumRealcomplex(o1,o2);
	cout<<"the sum of complex number "<<" is "<<result<<endl;

	return 0;
}

