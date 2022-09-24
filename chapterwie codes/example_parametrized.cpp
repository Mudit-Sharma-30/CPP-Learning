#include <cmath>
#include<iostream>
using namespace std;

class point {
	int x , y;
	friend double Distance (point K,point M);
	public:
		point(int a,int b )
		{
			x=a;
			y=b;
			}
			void display ()
			
			{
			cout<<"the point is ("<<x<<","<<y<<")"<<endl;		
				}	
	
};

  double Distance (point o1 , point o2)
{
	double X = (o1.x-o2.x)* (o1.x-o2.x);
	double Y = (o1.y-o2.y)* (o1.y-o2.y);
	double D = sqrt(Y+X); 
	
	return D;
	 
}

int main()
	{
		point p(1,1);
		p.display();
		
		point q(4,5);
		q.display();
		
		double a= Distance(p,q);
		cout<<"the distance between the point are "<<a;
	return 0;
	}

