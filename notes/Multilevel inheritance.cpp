#include<iostream>
using namespace std;

class Student {

	protected:
		int roll_no;
	public :

		void setRollNumber(int number) {

			roll_no = number;

		}

		void GetNumber() {

			cout<<"The Roll Number is :- "<<roll_no<<endl;

		}

};

//------------------------------------------------------------------------

class Exam : public Student {

	protected :
		float math;
		float physics;

	public:
		void SetMarks(float m,float p) {

			math = m;
			physics = p;

		}

		void GetMarks() {

			cout<<"You obtain "<< math<<" marks in math"<<endl;
			cout<<"You obtain "<< physics<<" marks in physics"<<endl;

		}

};

//------------------------------------------------------------------------


class Result : public Exam {
		float percentage;
	public:

		float  ObtainPercentage() {
			float total = ((math + physics)/200)*100;
			return total;
		}

		void display() {
			if (ObtainPercentage()<33 & ObtainPercentage()>=0) {
				GetNumber();
				GetMarks();
				cout<<"Sorry you have failed the exam"<<endl;
				cout<<"Your percentage is "<<ObtainPercentage()<<endl;

			} else if (ObtainPercentage()<0| ObtainPercentage()>100) {
				GetNumber();
				GetMarks();
				cout<<"you have entered the wrong input"<<endl;
				cout<<"Recheck your marks";
			} else {
				GetNumber();
				GetMarks();
				cout<<"Congo you have passed the exam"<<endl;
				cout<<"Your percentage is "<<ObtainPercentage()<<endl;
			}
		}

};

//------------------------------------------------------------------------


int main() {

	Result harry;
	int a;
	float m,p;
	cout<< "enter the Roll number"<<endl;
	cin >> a;
	harry.setRollNumber(a);

	cout<<"Enter you marks in math and physics"<<endl;
	cin>> m>>p;
	harry.SetMarks(m,p);
	harry.display();



	return 0;
}

