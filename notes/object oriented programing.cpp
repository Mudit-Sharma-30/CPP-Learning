#include<iostream>
using namespace std;

class employee
{
	private:
		int a ,b,c;
	public:
		int d,e;
		void setdata(int a1,int b1,int c1);
		// decalraion of a function.
		// function prototype.
		void getdata()
		{
		cout<<"The value of a is :- "<<a<<endl;
		cout<<"The value of b is :- "<<b<<endl;
		cout<<"The value of c is :- "<<c<<endl;
		cout<<"The value of d is :- "<<d<<endl;
		cout<<"The value of e is :- "<<e<<endl;
			
		};	
};	
 
void employee :: setdata(int a1 , int b1 , int c1) 	
	{
		a=a1;
		b=b1;
		c=c1;
		d=a+b;
		e=b+c;
	}
	 	
int main()
	{
	
	employee mudit;//object of our class 


//	mudit.a=45;		--> this syntax wll throw an error because we have defined our int a as private
	int a ,b ,c;
	cout<<"enter the value of a b and c"<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
	
	
	
	mudit.setdata(a,b,c);// we havn't set the value of d and e 
//	mudit.d=4;
//	mudit.e=5;
//	we are able to set the value of  and e seperatly because they are our public .	
	mudit.getdata();
	return 0;
	}

