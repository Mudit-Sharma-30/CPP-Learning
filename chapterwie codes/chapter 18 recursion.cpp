#include<iostream>
using namespace std;

int factorial(int n)
	{
	if(n<=1)
		{
			return 1;
		}
	return n*factorial(n-1);
	}

int fibbocni(int num)
	{
		if(num<=1)
		{
			return num;
		}
	
	return fibbocni(num-1)+fibbocni(num-2);
		
		
	}
int main()
	{
//	 factroial of a number
//	6!= 6*5*4*3*2*1
	 
///	n!=n*(n-1)!
//	int num; 
//	cout<<"Enter the number whose factorial you want\n";
//	cin>>num;
//	cout<<"The factorial of "<<num<<" is "<<factorial(num)<<endl;
	
	int num1;
	cout<<"enter the range of the Fibbocni series\n";
	cin>>num1;
	cout<<"The fiboccni series after "<<num1<<" stage is:- "<<fibbocni(num1);	
	
	return 0;

	}

