#include<iostream>
#include <fstream> //	--> Use to operate the files in the c++ language.


using namespace std;

/* Files:- A pattern of data that is stored in disk.

 The usefull classes to work with files in c++ are:-

1. fstreambase
2. istream  --> derived from fstreambase
3. ostream	--> derived from fstreambase

In order to work with files in c++ there are 2 ways too open a files in c++
1. Using the constructor
2. Using the member function open() of the class.

*/

int main() {
	string st = "Mudit bhai";
	string st2;
	// to open it will the help of the constructor and writing it

	ofstream out("files_input_and_output_in_c++.txt"); // Write operation
	out<<st; // this will add this string to the file name .


	// to open it will the help of the constructor and reading it

	ifstream in("files_input_and_output_in_c++_b.txt"); // read operation operation
//	in>>st2; // this will add this string to the file name .

	getline(in,st2);  //--> getline(<ifstream object>,<A string>)  ue to print the one complete line

	cout<<st2; // this will only print the word before first space or before next line

	return 0;
}

