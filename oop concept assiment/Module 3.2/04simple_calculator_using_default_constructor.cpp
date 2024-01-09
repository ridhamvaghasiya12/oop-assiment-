//Default constructor demo program..............................

#include <iostream>
using namespace std;

class call{
	
	int n1, n2;
	
	public :
		
		call()		//Default constructor........
		{
			cout<<"\n\n\t Enter the first input : ";
			cin>>n1;
			cout<<"\n\n\t Enter the second input : ";
			cin>>n2;
		}
		
		void printdata()
		{
			cout<<"\n\n\t Addition is : "<<n1+n2;
			cout<<"\n\n\t Substraction is : "<<n1-n2;
			cout<<"\n\n\t Multiplication is "<<n1*n2;
			cout<<"\n\n\t Divison is "<<n1/n2;
		}
};

main()
{
	call c1;
	
	c1.printdata(); 
}