#include<iostream>
using namespace std;

// base class and parent class
class employee {
	public:
		float salary;
		employee() {
			cout<<"Base class"<<endl;
			// default construct
		}
		int id;
		employee(int inpID) {
			id = inpID;
			salary = 34.0;
		}
};

// derived class
class programmer : public employee {
	public:
		programmer(int impid) {
			id = impid;
		}
		int languageCode = 32  ;
		void GetData() {
			cout<<id<<endl;
		}
};

int main() {

	employee harry(1),rohan(2);
	cout<<harry.salary<<endl;
	cout<<rohan.salary<<endl;

	programmer skillf(10 ) ;
	cout<<skillf.languageCode<<endl;
	cout<<skillf.id<<endl;
	skillf.GetData();


	return 0;
}

