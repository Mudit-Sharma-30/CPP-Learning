#include<iostream>
using namespace std;

template <class t1 = int,class t2 = float , class t3 = char> // Defining the default template..
class Harry {
	public:
		t1 a;
		t2 b;
		t3 c;

		Harry(t1 x , t2 y , t3 z) {

			a=x;
			b=y;
			c=z;
		}

		void display() {
			cout<<"The value of A is :- "<<a<<endl;
			cout<<"The value of B is :- "<<b<<endl;
			cout<<"The value of C is :- "<<c<<endl;

		}
};


int main() {

	Harry </* this can be left alone as we have use default parameter*/> h(4,6.5,'c');
	h.display();

	cout<<endl;

	Harry<float,char,char> g(4.5,'d','m');
	g.display();

	return 0;
}

