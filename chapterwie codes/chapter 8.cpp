#include <iostream>
using namespace std;
int main()
{
//	int a= 34;
//	cout <<"the value of a is "<<a;
//	a =45;
//	cout <<" \nthe value of a is "<<a;
//	// constants in c++
//	if(a>24)
//	{
//		cout<<"bkdnfe";
//		
//	}
//	 if (a>10)
//	{
//	cout<<"fjerjg";
	
	
	// multipliccation able using do while loop
	int a,n;
	cout<<"enter the number of which you want to have the multipliaction\n";
	cin>> a;
	cout<<"enter the number upto which you want to have the multiplication\n";
	cin>> n;
	int i=0;
	do{
		cout<<a<<"X"<<i<<"="<<(a*i)<<endl;
		i++;
		
	}while(i<=n);
	
	
return 0;
}
