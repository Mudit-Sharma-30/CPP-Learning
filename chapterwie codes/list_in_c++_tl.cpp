#include <iostream>
#include <list>

using namespace std;


void display(list<int> &list0) {
	list<int> :: iterator itr;
	for(itr	= list0.begin(); itr!=list0.end(); itr++) {
		//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		cout<<*itr<<" ";
	}

	cout<<endl;
	cout<<"--------------------------------------------------------------------"<<endl;

}

int main() {

	list <int> list1; //-> LIST OF ZERO LENGTH
	list1.push_back(5);
	list1.push_back(4);
	list1.push_back(8);
	list1.push_front(9);

//	list1.sort();
	display(list1);

//	list<int>:: iterator iter;
//	iter = list1.begin(); //--> referance of first element of list
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	int number;
	cout<<"Enter the amount of number you want to insert in the list2"<<endl;
	cin>>number;

	list <int> list2(number); //--> EMPTY LIST OF SIZE 7
	list<int> :: iterator itr;
	int n=1;


	// Adding element in the list using iterator
	// -----------------------------------------

	for(itr = list2.begin(); itr !=list2.end(); itr++) {
		cout<<"Enter the value of "<<n<<" element of the list2" <<endl;
		cin>>*itr;
		n++;
	}
	display(list2);

	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	//					REMOVING THE ELEMENT FROM THE LIST
	//					----------------------------------


	list1.pop_back(); // remove the last element of the list
	display(list1);
	list2.pop_front();// remove the first element of the list
	display(list2);

	// we can also remove the element from the middle of the list
	list1.remove(8); //--> remove the value 8 from the list
	display(list1);
	list2.remove(5);
	display(list2); // it will remove all the multiple value of that number

	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	//							SORTING THE LIST
	//							----------------

	list2.sort(); // --> SORTING THE LIST
	display(list2);

	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	//							MERGING THE LIST
	//							----------------

//	list1.merge(list2);

	//	AFTER MERGING THE LIST
	display(list1);

	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


	//							REVERSING THE LIST
	//							----------------

	list1.reverse();
	display(list1);

	return 0;
}
