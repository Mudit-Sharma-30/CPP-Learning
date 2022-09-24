#include<iostream>
using namespace std;

class employee{
	int id;
	int salary;
	public:
		void SetId (void)
		{
			salary = 122;
			cout<<"Enter the ID of the employee"<<endl ;
			cin>>id;
			
		}
		void GetId (void)
		{
			cout<<"The Id of this employee is "<<id<<endl;
		}
};

int main()
	{
//	employee mudit,komal,kamo,baby;
//	
//	mudit.SetId();
//	mudit.GetId();
	employee fb[4];
	// storing 4 value in fb array.
	for(int i=0;i<4;i++)
	{
	fb[i].SetId(); 
	fb[i].GetId();	
	}
		
		
	return 0;
	}

