#include<iostream>
#include<fstream>
#include <string>


using namespace std;
int main() {

	ofstream out;
	out.open("files_input_and_output_in_c++.txt"); //--> 	 Open method use to open the file

	out<<"This is me"<<endl;
	out<<"This is me 2"<<endl;
	out<<"This is me 3"<<endl;
	out<<"This is me 4"<<endl;

	out.close();


	ifstream in;
	in.open("files_input_and_output_in_c++.txt");

	string str;

//	getline(in,str);
//	cout<<str;

	// To print the line till the end of the file :-

	while(in.eof()==0) {
		getline(in,str);
		cout<<str<<endl;
	}

	return 0;
}

