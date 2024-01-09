//Write a program to find the multiplication values and the cubic values using inline function......................

#include <iostream>
using namespace std;

class math{
	
	int n1, n2, n3;
	
	public :
		
		void getdata(int num1, int num2, int num3)
		{
			n1=num1;
			n2=num2;
			n3=num3;
		}
		
		inline int cube()
		{
			return n3*n3*n3;
		}
		
		inline int multi()
		{
			return n1*n2;
		}
		
};

main()
{
	math m;
	
	int num1, num2, num3, cube, multi;
	
	cout<<"\n\n\t Enter first number for multiplication : ";
	cin>>num1;
	cout<<"\n\n\t Enter second number for multiplication : ";
	cin>>num2;
	cout<<"\n\n\t Enter third number for cube : ";
	cin>>num3;
	
	m.getdata(num1,num2,num3);
	
	multi=m.multi();
	cout<<"\n\n\t Multiplication is : "<<multi;
	
	cube=m.cube();
	cout<<"\n\n\t Cube is : "<<cube;
}