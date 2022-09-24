#include<iostream>
using namespace std;

int count =0; // global variable

class Num {
	public:
		Num() {
			count++;
			cout<<"This the time when constructor is called for object number"<<count<<endl;
		}

		~Num() {
			cout<<"This the time when my detructor i called for object number "<<count<<endl;
			count--;
		}

};

int main() {

	cout<<"we are inside our main function"<<endl;
	cout<<"Creating first object n1"<<endl;
	Num n1;
	{
		cout<<"entering this block"<<endl;
		cout<<"creating two more object"<<endl;
		Num n2,n3;
		cout<<"exiting this block"<<endl;
	}

	cout<<"Back to main"<<endl;
	return 0;
}

