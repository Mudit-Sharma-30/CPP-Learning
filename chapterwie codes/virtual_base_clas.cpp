#include<iostream>
using namespace std;

/*
Student-->|Test | done
					--> Result done
Student-->|Sport| done
*/

///////////////////////////////////////////////////////////////////
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
class Student{
	protected:
		int roll_no;
	public:
		void SetNumber(int a){
			roll_no = a;
		}	  
		
		void PrintNumber (){
			cout<<"Your Roll number is :"<<roll_no<<endl;
		}
};
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
class Test : virtual public Student{
	protected :
		float Math,Physics;
	public:
		void SetMarks(float m1,float m2){
			Math 	= m1;
			Physics	= m2;
		}	
		void PrintMarks(){
			cout<<"Your Marks are "<<Math<<" and "<<Physics<<endl;
		}
}; 
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
class Sports : virtual public Student{
	protected:
		float Score;
	public:
		void SetScore(float b){
			Score = b;
		}
		
		void PrintScore(){
			cout<<"Your PT score is "<<Score<<endl;
		}
	
};
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
class Result :public Test , public Sports{
		float Total;
	public:
		void Display (){
		Total = Physics	+ Math + Score;
		PrintNumber();
		PrintMarks();
		PrintScore();
		
		cout<<"Your total score is "<<Total<<endl;
		}	
	
};
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
///////////////////////////////////////////////////////////////////
int main()
	{
	Result Mudit;
	Mudit.SetNumber(21);
	Mudit.SetMarks(98,99);
	Mudit.SetScore(100);
	Mudit.Display();
	
	return 0;
	}

