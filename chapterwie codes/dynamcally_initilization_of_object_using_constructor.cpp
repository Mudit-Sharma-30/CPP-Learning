#include<iostream>
using namespace std;

//-----------------------------------------------

class BankDeposit{
	
	int principal;
	int years;
	float intrestRate;
	float returnvalue;
	
	public:
		BankDeposit(){
		}
		BankDeposit(int p,int y,float r );
		BankDeposit(int p,int y,int r );
		void show ();
		
};

//-----------------------------------------------

	BankDeposit::BankDeposit(int p,int y,float r )
{
	 principal=p;
	 years=y;
	 intrestRate=r;
	 returnvalue = principal;
	 
	 for (int i=0;i<y;i++)
	 {
	 	returnvalue = returnvalue * (1+intrestRate);
	 }
}
BankDeposit::BankDeposit(int p,int y,int r )
{
	 principal=p;
	 years=y;
	 intrestRate=float(r) /100;
	 returnvalue = principal;
	 
	 for (int i=0;i<y;i++)
	 {
	 	returnvalue = returnvalue * (1+intrestRate);
	 }
}
	void BankDeposit::show(){
	
		cout<<endl<<"principal amount was "<<principal
		<<"You deposit is for "<<years
		<<" Years\nand you get the intrest of "<<intrestRate
		<<"and now your return value is "<<returnvalue<<endl	;	
		 }	 
	 

int main()
	{
		BankDeposit bd1,bd2,bd3;
		int p,y;
		float r;
		int R;
		
		bd3.show();
		
		cout<<"Enter the value of p y and r"<<endl;
		cin>> p>>y>>r;
		bd1 = BankDeposit(p,y,r);
		bd1.show() ;
 		
 		cout<<endl;
 		cout<<endl;
 		cout<<endl;
 		cout<<endl;
 		
 		cout<<"Enter the value of p y and R"<<endl;
		cin>> p>>y>>R;
		bd2 = BankDeposit(p,y,R);
		bd2.show() ;
	return 0;
	}
		
