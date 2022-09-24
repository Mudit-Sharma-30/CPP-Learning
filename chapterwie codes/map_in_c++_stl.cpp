#include<iostream>
#include<map>
#include<string>
using namespace std;

// Map is an associative array

int main() {
	map<string,int>marksMap;
	marksMap["mudit"]= 95;
	marksMap["ankit"]= 85;
	marksMap["komal"]= 97;

//	marksMap.insert({{"shubham",89},{"devansh",67}});
	map<string,	int>::iterator iter;

	for(iter = marksMap.begin()/* This will make the pointer to the begning of the map*/; iter!= marksMap.end(); iter++) {
		cout<<(*iter).first/* first member (name)*/<<" "<<(*iter).second/* second member (marks)*/<<endl;
	}
	
	cout<<"The size of the map function is "<<marksMap.size()<<endl;
	return 0;
}

