#include <iostream>
using namespace std;
int c=45;//global variable
void sum()
{int a;
cout<<c;
}
int main()
{
	int c=78;// local variale
	int a,b;
	a=45;
	b=96;
	sum();
	
	//cout<<"the value of a is "<<a<<" the value of b is "<<b;
	cout<<"\n"<<c;
	return 0;
}
