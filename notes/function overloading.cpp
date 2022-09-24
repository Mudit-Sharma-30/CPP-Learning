#include<iostream>
using namespace std;

int volume (int num)
	{
	return num*num*num;	
	}
	
int volume (int num,int num1,int num2)
	{
	return num*num1*num2;	
	}		

int volume (int num,int num1)
	{
	return 3.14*num*num*num1;	
	}
int main()
	{
		cout<<"enter the shape you want to find volume\n1.--> square\n2.-->rectangle\n3.-->cylinder\n";
	int a;
	cin>>a;
	
	
	if (a==1)
	{
		int sqside;
		cout<<"enter the side of the square\n";
		cin>>sqside;
		cout<<"the volume of the square with side "<<sqside<<" is "<<volume(sqside);
	}
	
	if (a==2)
	{
		int culength,cubreath,cuheight;
		cout<<"enter the length,breath,height of the cuboid\n";
		cin>>culength;
		cout<<endl;
		cin>>cubreath;
		cout<<endl;
		cin>>cuheight;
		cout<<endl;
		cout<<"the volume of the cuboid  with sides "<<cubreath<<","<<culength<<","<<cuheight<<"is"<<volume(cubreath,cuheight,culength);
		
	}
	
	if (a==3)
	{
		int cylinderheight,cylinderradius;
		cout<<"enter the height and radius of cylinder\n";
		cin>>cylinderheight;
		cout<<endl;
		cin>>cylinderradius;
		cout<<"the volume of the cylinder with radius "<<cylinderradius<<" and height "<<cylinderheight <<volume(cylinderheight,cylinderradius);
	}
	return 0;
	}

