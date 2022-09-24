#include<iostream>
using namespace std;

class simple {
	int data1;
	int data2;
	public:
		simple(int a=8, int b=9) // passing the defaut 	argument
		{
			data1 = a;
			data2 = b;
			
		}
		
		
		void printData();
		
};

void simple :: printData(){
	cout<<"The value of data is "<<data1<<" and "<<data2<<endl;
}

int main()
	{
	simple s (1);
	s.printData();
	simple s1(4,5);
	s1.printData();
	return 0;
	}

