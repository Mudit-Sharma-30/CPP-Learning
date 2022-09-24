#include<iostream>
using namespace std;
//
//	float FuncAverage(int a , int b){
//	float avg = (a+b)/2.0;
//	return avg;
//}
//
//	float FuncAverage2(int a , float b){
//	float avg = (a+b)/2.0;
//	return avg;
//}

//we can rther define a function template for this

template <class t1, class t2>
	float FuncAverage2(t1 a , t2 b){
	float avg = (a+b)/2.0;
	return avg;
}

template <class t>
	void swapp(t &a , t &b){
		t temp = a;
		a=b;
		b=temp;
		cout<<"The value of a and b now are "<<a<<"	"<<b<<endl;
	}

int main()
	{
	
	float b;
//	a =FuncAverage(5,2);	
//	cout<<("The Average of these number are %f",a)<<endl;	
	
	b =FuncAverage2(6,3.5);
	cout<<("The average of these number are %f",b)<<endl;	
	
	int x = 3, y = 5;
	swapp(x,y);
	return 0;
	
	}

