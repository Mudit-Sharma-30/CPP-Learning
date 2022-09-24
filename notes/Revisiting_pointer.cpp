#include<iostream>
using namespace std;



int main() {

	//Basic example
	int a = 4;
	int* ptr = &a;

	cout<<"The value of a is:-  " <<*(ptr)<<endl;

	// new keyword
	int * p = new int (40);
	cout<<"The value of p is:-  " <<*(p)<<endl; // --> Give us the value present at  that adress
	cout<<"The value of p is:-  " << (p)<<endl; // --> Give us the value of address of p

	// array using new keyword i.e dynamically creating array
	int * arr = new int [3];
	arr[0] =10;
	*(arr+1) =20; //--> This i eual to the arr[1]
	arr[2] =30;

	//delete[]arr ; --> delete operator use to delete

	cout<<"The value of arr[0] is :"<<arr[0]<<endl;
	cout<<"The value of arr[1] is :"<<arr[1]<<endl;
	cout<<"The value of arr[2] is :"<<arr[2]<<endl;


	return 0;
}

