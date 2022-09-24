	/* oops and object concept 
	
	initially we call it c with classes
	
	classes --> extenstion of strucure (like secrity and function)
	
	structure have limitation :-
	1. member are public
	2. you cant add method in the structure
	
	classes can have method and property
	
	classes can make few member as private or few public	
	*/
	
#include<iostream>
#include <string>
using namespace std;

	class binary{
		private:
			string  s ;
			void chk_bin(void);//declaring a function
		public :
			void read (void);//declaring a function
			void ones_c(void);//declaring a function
			void display(void);//declaring a function
	};
	
	void binary::read(void)
	{
		cout<<"Enter a Binary Number "<<endl;
		cin>>s;
		  	
	}
	
	void binary::chk_bin(void)
	{
		for(int i=0;i<s.length();i++ )
		{
			if(s.at(i)!='0' && s.at(i)!='1')
			{
				cout<<"incorrect binary format"<<endl;
				exit(0);
				}	
		}
	}
	
	void binary::ones_c(void)
	{
	 for(int i=0;i<s.length();i++ )
	 {
	 
	 	if(s.at(i)=='1')
	 	{
	 		 s.at(i)='0';
		 }
		 
		 else
	 	{
	 		 s.at(i)='1';
		 }
	 }
	 	
	}
	void binary::display(void)
	{
	chk_bin();// nesting of member funciton
		
	cout<<"the  number is:-";
	 for(int i=0;i<s.length();i++ )
	{
		cout<<s.at(i);
	}
	cout<<endl;
	 }
	
int main()
	{
	
	binary b;
	b.read();
	b.display();
	b.ones_c();
	b.display();

	
	return 0;
	}

