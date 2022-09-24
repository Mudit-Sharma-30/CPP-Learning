#include <iostream>
using namespace std;
int main()
{
int n;
		cout<<"enter the amount of number you want to store "<<endl;
		cin>>n;
		int marks[n];
		for(int i=0;i<n;i++)
		{
			int a;
			cout<<"enter "<<(i+1)<<" element of the array\n";
			cin>> a;
			marks[i]=a;
			
		}
		cout<<endl;
		int i=0;
/*	while (i<n)
	{
		cout<<marks[i]<<endl;
		i++;
		}
*/
int *p=marks;
//cout<<*(p+2);
int increment=0;
do
{
	cout<<*(p + increment)<<endl;	
	;
	increment++;
		}
		while(increment<n);		
			
		return 0;
		
}
