#include<iostream>
#include<vector> //---> Need to run it for vector
using namespace std;

template <class T>
void display(vector <T> &v) {
	cout<<"Display this vector"<<endl;
	for(int i = 0; i < v.size(); i++ ) {
		cout<<v[i]<<" ";
//		cout<<v.at(i)<<" ";
//
	}
	cout<<endl;
}


int main() {


//	cout<<"Enter the size of the vector"<<endl;
//	cin>>size;
//	for(int i = 0 ; i<size ; i++)
//	{
//		cout<<"Enter an element to add to this vector"<<endl;
//		cin>>element;
//		vec1.push_back(element); //--> Vector method to add element
//	}
//		vec1.pop_back(); //--> Vector method to remove the last element
//	display(vec1);
//	vector<int>:: iterator iter = vec1.begin(); //--> syntax to insert new element in the begning.
// 	//	vec1.insert(iter+1,5/* this signifies how many copies u want to insert */,566);
//	// 	iterator --> always insert the new value to the place where itertor is pointing.
//
//	display(vec1);
//

//	vector <int> vec1;			// --> ZERO LENGTH VECTOR
//	vector <char> vec2(4); 		//--> 4 ELEMENT CHARACTER VECTOR
//	vector <char> vec3(vec2);	//--> 4 ELEMENT CHARACTER VECTOR FROM VEC2
	vector <int> vec4(4,13);		//--> 6 ELEMENT VECTOR OF 3s
	int element,size = 5;
//	vec2.push_back('5');
	display( vec4);

	cout<<vec4.size();

	return 0;
}

