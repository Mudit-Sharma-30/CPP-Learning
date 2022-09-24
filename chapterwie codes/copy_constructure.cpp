#include<iostream>
using namespace std;

class number{
	int a;
	public:
		
		number(){
			// default constructor
			a=100;
		}
		
		
		number(int num){
			a = num;
		}
		
		number(number &obj){ // copy constructor 
			cout<<"Copy constructor called"<<endl;
			a = obj.a;
		}
				
		void display(){
			cout<<"The number of this object is :- "<<a<<endl;
		}
			
};


int main()
	{
	number x(45),y,z(45),z2;
	z.display();
	x.display();
	y.display(); 
	
	number z1(x); // copy constructor ivoked
	z1.display();
	// z1 should xactly resemble z or x or y
	
	z2 = z;// copy construcor not called
	
	number z3 = z;// copy constructor called  
	 
	
	;return 0;
	}

