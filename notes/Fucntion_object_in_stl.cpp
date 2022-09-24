#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main()
	
	{

	// 	Function Object: Function wrapped in a class so that it is 
	//	avaliable like an object
	
	int arr[]= {12,45,89,56,23,78,45};	
	
	//	sort(arr,arr+5);// sort first 5 element of the arrray
	
	sort(arr,arr+5,greater<int>());// sort first 5 element of the arrray in descending order
	
	for (int i = 0; i<7;i++)
	{
		cout<<arr[i]<<endl;
	}
	
	
	return 0;
	}

