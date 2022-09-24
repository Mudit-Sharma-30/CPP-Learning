#include<iostream>
#include<fstream>

using namespace std;
int main() {

	ofstream out("files_input_and_output_in_c++_b.txt");

	string name;
	cout<<"Enter your name : - "<<endl;
	cin>>name;
	out<<"Name you enter is :- "+name;
	out.close();//	-->Use to close the object of the stream


	ifstream in("files_input_and_output_in_c++_b.txt");
	string str;
	getline(in,str);
	in.close();//	-->Use to close the object of the stream
	cout<<"The content on this file is \n"<<str;










	return 0;
}

