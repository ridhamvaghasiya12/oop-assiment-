#include<iostream>
using namespace std;

class calculator
{
	int a, b;
	public:
		
		void getdata()
		{
			cout<<"\n\n\t enter the number one : ";
			cin>>a;
			
			cout<<"\n\n\t enter the number one : ";
			cin>>b;
		}
		
		void printdata()
		{
			cout<<"\n\n\t addition = "<<a+b;
			cout<<"\n\n\t subtraction = "<<a-b;
			cout<<"\n\n\t multiplication = "<<a*b;
			cout<<"\n\n\t divison = "<<a/b;
		}
	
};

main()
{
	calculator cobj;
	
	cobj.getdata();
	cobj.printdata();
	
}
