#include<iostream>
using namespace std;

class Base{
	int Data1;
	public:
		int Data2;
		
		void SetData();
		
		int GetData1();
		
		int GetData2();
};

void Base :: SetData (void)
{
	Data1 = 10;
	Data2 = 20;
}

int Base :: GetData1()
{
	return Data1;
}

int Base :: GetData2()
{
	return Data2;
}

class Derived : public Base{ // class is being derived publicaly
	int Data3;
	public:
		
		void Process();
		
		void Display();
	
};

void Derived :: Process ()
{
	Data3 = Data2 * GetData1();
	
}

void Derived :: Display()
{
	cout<< "Value of data 1 is "<<GetData1()<<endl;
	cout<< "Value of data 2 is "<< Data2<<endl;
	cout<< "Value of data 3 is "<< Data3<<endl;
	 
}

int main()
	{
		
	Derived der;
	der.SetData();
	
	der.GetData1();
	der.GetData2();
	der.Process();
	der.Display();
		
	
	return 0;
	}

