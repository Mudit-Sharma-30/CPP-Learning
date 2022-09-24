#include <iostream>
using namespace std;
int c=45; //gloal variable
int main()
{
int a,b,c;
cout<<"enter the number for a\n";
cin>>a;
cout<<"enter the number fob b\n";
cin>>b;
c=a+b;//local variable
cout<<"the value of c is"<<c;//printning local variable
cout<<"the value of c is"<<::c<<endl;

	
	
return 0;	
}
