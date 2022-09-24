#include<iostream>
using namespace std;

class c2;

class c1{
	int  c1Value;
	public:
		void inData(int value){
			
		c1Value = value;
		} 
		
		void Display (void){
			cout<<c1Value<<endl; 
		}
		
	friend void exchange (c1 x,c2 y);
		
		
	
};
class c2{
	int c2Value;
	public:
		void inData(int value2){
			
		c2Value = value2;
		} 
		
		void Display (void){
			cout<<c2Value<<endl; 
		}
		
	friend void exchange (c1 x,c2 y);
		
		
	
};

void exchange(c1 x, c2 y){
	int temp = x.c1Value;
	x.c1Value = y.c2Value;
	y.c2Value	 = temp;		
}

int main()
	{
		c1 oc1;
		c2 oc2;
			
		oc1.inData(34);
		oc2.inData(85);
		
		exchange(oc1,oc2);
		
		oc1.Display();
		oc2.Display();		

	return 0;
	}

