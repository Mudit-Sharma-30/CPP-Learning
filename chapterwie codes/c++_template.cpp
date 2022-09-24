#include<iostream>
using namespace std;

template <class T>

class vector {
	public:
		T * arr;
		int size;

		vector(int n ) {
			size = n;
			arr = new T [size];
		}

		T DotProd(vector &v) { // for the int the T will be int for the Float the T will be flaot
			// so we are keeping our function type T.
			T d = 0;
			for(int i=0 ; i < size ; i++) {
				d += this->arr[i]*v.arr[i];	// dot product = a.b = (a1b1 + a2b2 + a3b3)
			}
			return d;
		}



};

int main() {

	/*

	As we know that

	class --> object
	template --> class

	*/

//	vector v1(3);
//	v1.arr[0] = 4;
//	v1.arr[1] = 5;
//	v1.arr[2] = 6;
//
//	vector v2(3);
//	v2.arr[0] = 9;
//	v2.arr[1] = -8;
//	v2.arr[2] = 7;
//
//	int a = v1.DotProd(v2);
//
//	cout<<a<<endl;

	int n;

	cout<<"What is the number of element you want in the vector "<<endl;
	cin>>n;

//	vector <float> v1(3);	// using our template method
//	v1.arr[0] = 4.9;
//	v1.arr[1] = 5.6;
//	v1.arr[2] = 6.9;
//
//	vector <float> v2(3);	// using our template method
//	v2.arr[0] = 9.3;
//	v2.arr[1] = -8.1;
//	v2.arr[2] = 7.2;
//
//	float a = v2.DotProd(v1);
//
//	cout<<a<<endl;

	vector <float> v1(n);
	vector <float> v2(n);

	for(int i = 0 ; i<n; i++) {
		cout<<"Enter the "<<(i+1)<<" element of the First vector"<<endl;
		cin>>v1.arr[i];
	}

	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;

	for(int i = 0 ; i<n; i++) {
		cout<<"Enter the "<<(i+1)<<" element of the Second vector"<<endl;
		cin>>v2.arr[i];
	}

	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;

	float DotProduct = v1.DotProd(v2);
	cout<<"The dot product of these two vector are:- "<<DotProduct<<endl;

	return 0;
}

