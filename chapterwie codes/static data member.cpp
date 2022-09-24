#include<iostream>
using namespace std;

class employee {
		int id;
		static int count;
	public:
		void SetData(void) {
			cout<<"enter the id "<<endl;
			cin>>id;
			count++;
		} 
		void GetData(void) {
			cout<<"the id of this employee is: "<<id<<" and this is employee number    "<<count <<endl ;
		}
		static void GetCout(void) {
			cout<<"The value of count is  "<<count<<endl;
		}

};


int employee:: count;// static variable deafult value is zero but can change it here 

int main() {
	employee Mudit,Komal,Komu;
	
	Mudit.SetData();
	Mudit.GetData();
	Mudit.GetCout();
	
	Komal.SetData();
	Komal.GetData();
	employee::GetCout();

	Komu.SetData();
	Komu.GetData();
	employee::GetCout(); 
	return 0;
}

