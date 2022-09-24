#include<iostream>
using namespace std;
int main() {
	int n;
	cout<<"Enter how many number you want to use"<<endl;
	cin>>n;

	float number[n];

	cout<<"Enter the numbers"<<endl;

	for(int i=0; i<n; i++) {
		cout<<"Enter the "<<(i+1)<<" number"<<endl;
		cin>>number[i];
	}
	int a;
	do{
	
		    cout<<"What operation you want to use"<<endl;
		    cout<<"1. Additon"<<endl;
		    cout<<"2. Subtraction"<<endl;
		    cout<<"3. Multipication"<<endl;
		    cout<<"4. Division"<<endl;


		    
		    cin>>a;

		if(a>4 || a<1) {
		cout<<"Enter the proper output"<<endl;
	}

}while(a>4 || a<1);

		if(a==1) {
			int sum = 0;
			for(int i=0; i<n; i++) {

				sum += number[i];
			}
			cout<<"The sum of all these number are "<<sum;


		}

	if(a==2) {
		int sub = number[0];
		for(int i=1; i<n; i++) {

			sub -= number[i] ;
		}
		cout<<"The subtractiob of all these number are "<<sub;


	}

	if(a==3) {
		int multi =1;
		for(int i=0; i<n; i++) {

			multi = multi* number[i];
		}
		cout<<"The multiplication of all these number are "<<multi;


	}

	if(a==4) {
		int div = number[0];
		for(int i=1; i<n; i++) {

			div = div/number[i];
		}
		cout<<"The divison of all these number are "<<div;


	}

	return 0;
}

