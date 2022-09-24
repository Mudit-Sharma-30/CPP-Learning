#include <iostream>
#include <cstring>

using namespace std;

//	***********************************************************************************************************
//	~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

class CWH {
	protected:
		string Title;
		float Rating;
	public:
		CWH (string s , float r ) {
			Title  = s;
			Rating = r;
		}

		virtual void display() = 0 { // Now this function is pure virtual function
			// i.e we can't create any derived class without having method name "DISPLAY"
			cout<<"You haven't made any object ";
		}
};

//	~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

class CWHVedio: public CWH {
		float vedioLength;
	public:
		CWHVedio(string s , float r , float vL):CWH(s,r) { 	//--> will call base class constructor
			vedioLength = vL;
		}

		void display() {
			cout<<"This is an amazing vedio with title :- "<<Title<<endl;
			cout<<"This vedio has Rating:- "<<Rating<< " out of 5 starts"<<endl;
			cout<<"Length of this vedio is "<<vedioLength<< " minutes "<<endl;
		}
};

//	~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

class CWHText: public CWH {
		int WordsLength;
	public:
		CWHText(string s , float r , int wL):CWH(s,r) { 	//--> will call base class constructor
			WordsLength = wL;

		}

		void display() {
			cout<<"This is an amazing text with title :-"<<Title<<endl;
			cout<<"This text has Rating:- "<<Rating<< " out of 5 starts"<<endl;
			cout<<"Total words in this text is  "<<WordsLength  << " wrods "<<endl;
		}
};

//	***********************************************************************************************************

int main() {

	string title;
	float rating,vlen;
	int words;

	// for code with harry vedio

	title = "c++ learnig vedio with mudit sharma";
	vlen = 4.56; //	--> variable of the vedio length
	rating = 4.89;//--> variable of the rating for the base class onstrucotr.

	CWHVedio obj_vedio(title , rating , vlen);
	// obj_vedio.display();

	title = "c++ learning text";
	words = 433  ;
	rating = 4.19;

	CWHText obj_text (title , rating , words);
	//obj_text.display();

	CWH *tuts[2];
	tuts[0] = &obj_vedio;
	tuts[1] = &obj_text;

	tuts[0]->display();
	cout<<endl;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<endl;
	tuts[1]->display();

	return 0;
}

