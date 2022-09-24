#include<iostream>
using namespace std;

class complex {
		int real,imaginary;
	public:
		void GetData() {
			cout<<"The real part is :" <<real<<endl;
			cout<<"The imaginary part is :"<<imaginary<<endl;
			cout<<endl;
			cout<<"--------------------------"<<endl;
			cout<<endl;
		}

		void SetData(int a , int b) {
			real=a;
			imaginary=b;
		}
};

int main() {

	complex c1;

	complex *ptr = &c1; // pointer class

	c1.SetData(5,9);
	c1.GetData();

	(*ptr).SetData(7,6);
	//(*ptr).GetData();
	ptr->GetData(); // this is the use of arrow operator......

	complex*ptr1 = new complex; // this is also valid

	(*ptr1).SetData(70,90);
	(*ptr1).GetData();

	// array of object

	complex * ComplexArray = new complex[3];

	ComplexArray->SetData(10,20);
	ComplexArray->GetData();

	(ComplexArray+1)->SetData(14,22);
	(ComplexArray+1)->GetData();

	(ComplexArray+2)->SetData(41,32);
	(ComplexArray+2)->GetData();

	return 0;
}

