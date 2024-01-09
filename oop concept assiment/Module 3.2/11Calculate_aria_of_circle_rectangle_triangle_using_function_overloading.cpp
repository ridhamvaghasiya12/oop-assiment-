/*Write a program to calculate the area of circle, rectangle and triangle using
Function Overloading
? Rectangle: Area * breadth
? Triangle: ? *Area* breadth
? Circle: Pi * Area *Area*/

#include<iostream>
using namespace std;

class base 
{
	public:
		int choice,b,h,r,l,w;
		float area;

		void getdata() 
		{
			cout<<"\n\n\t *****************Menu***************** \n";

			cout<<"\n\n\t 1. Triangle\n";
			cout<<"\n\n\t 2. Cricle\n";
			cout<<"\n\n\t 3. Rectangle\n";

			cout<<"\n\tSelect your choice : ";
			cin>>choice;

		}
};
class letdata : public base 
{
	public:
		void sdata() 
		{
			if (choice==1) 
			{
				cout<<"\n\n\tEnter Base : ";
				cin>>b;
				
				cout<<"\n\n\tEnter Base & Height : ";
				cin>>h;
				
				area=(b*h)/2;
				cout<<"\n\n\tArea of Triangle : "<<area;
			} 
			else if (choice==2) 
			{
				cout<<"\n\n\tEnter radius of circle : ";
				cin>>r;
				area=3.142*r*r;
				cout<<"\n\n\tArea of circle : "<<area;
			}
			else if (choice==3) 
			{
				cout<<"\n\n\tEnter Length : ";
				cin>>l;
				
				cout<<"\n\n\tEnter Width : ";
				cin>>w;
				
				area=l*w;
				cout<<"\n\n\tArea of Rectangle : "<<area;
			} 
			else 
			{
				cout<<"\n\n\tinvalid output";
			}
		}
};

main() 
{
	letdata d;
	d.getdata();
	d.sdata();
}
