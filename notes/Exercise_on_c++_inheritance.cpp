#include<iostream>
#include <cmath>
using namespace std;

class calculator {
		float number1;
		float number2;
	public:
		calculator() {

		}

		void SetNumber(float a ,float b) {
			number1 = a;
			number2= b;
		}

		int GetNumber1() {
			return number1;
		}

		int GetNumber2() {
			return number2;
		}

		void Calculation() {
			cout<<"The sum of these two number are "<<(number1+number2)<<endl;
			cout<<"The subtraction of these two number are "<<(number1-number2)<<endl;
			cout<<"The multiplication of these two number are "<<(number1*number2)<<endl;
			cout<<"The division of these two number are "<<(number1/number2)<<endl;
		}

};

class scientificCalculator {

		float x;
	public:
		void getDataScientific() {
			cout<<"Enter a number"<<endl;
			cin>>x;
		}
		void displayScientific() {
			int num;
			cout<<"What you want to find ??"<<endl;
			cout<<"1. Sin(a)\n2. Cos(a)\n3. Tan(a)\n4. Exp(a)"<<endl;
			cin>>num;
			if (num == 1) {
				cout<<"The value of sin("<<x<<") is "<<sin(x)<<endl;
			} else if (num == 2) {
				cout<<"The value of cos("<<x<<") is "<<cos(x)<<endl;
			} else if (num == 3) {
				cout<<"The value of tan("<<x<<") is "<<tan(x)<<endl;
			} else if (num == 4) {
				cout<<"The value of exp("<<x<<") is "<<exp(x)<<endl;
			}
		}

};

class HuybridCalculator : public calculator , public scientificCalculator {



};

int main() {
	HuybridCalculator cref;
	cref.getDataScientific();
	cref.displayScientific();
	cref.SetNumber(14,9);
	cref.Calculation();
	return 0;
}

