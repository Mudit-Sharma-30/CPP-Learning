#include<iostream>
using namespace std;


class complex {
	int a ,b;
	public:
		complex(int x , int y ); 							// decalaration of the constructor
		
		void PrintNumber ()
		{
			cout<<" The complex number is "<<a <<" + "<<b<<"i"<<endl;
			 
		}
};

complex :: complex(int x , int y )
{
	a= x;
	b=y;
 }
 
  
int main()
	{
	// impicit call 
	
	complex a(4,6);
	a.PrintNumber();

	// explcit call
	complex b = complex (6,9);
	b.PrintNumber();
		
	return 0;
	}

