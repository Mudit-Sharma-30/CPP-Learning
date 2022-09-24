#include<iostream>
using namespace std;

class Base1	{
	protected:
		int base1;
	public:
		void set_base1(int b) {
			base1 = b;

		}


};

class Base2	{
	protected:
		int base2;
	public:
		void set_base2(int b) {
			base2 = b;

		}


};

class Base3	{
	protected:
		int base3;
	public:
		void set_base3(int b) {
			base3 = b;

		}


};


class derived : public Base1,public Base2,public Base3 {
public:
	void Show()
	{
		cout<<"The value of Base 1 is "<<base1<<endl;
		cout<<"The value of Base 2 is "<<base2<<endl;
		cout<<"The value of Base 3  is "<<base3<<endl;
		cout<<"The sum of these value is "<<(base1+base2+base3)<<endl;
	}
};

int main() {
	
	derived mudit;
	 mudit.set_base1(45);
	 mudit.set_base2(65);
	 mudit.set_base3(01);
	 mudit.Show();
	return 0;
}

