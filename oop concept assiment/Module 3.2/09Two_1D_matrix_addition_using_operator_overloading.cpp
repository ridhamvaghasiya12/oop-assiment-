// Write a Program of Two 1D Matrix Addition using Operator Overloading

#include<iostream>
using namespace std;
class Matrix
{
	int a[5],c[5];
	int b[5];
	int i;
	
	public:
		
		void accept();
		void display();
		void operator +(Matrix obj);
};

void Matrix :: accept()
{
	for(i=0;i<5;i++)
	{	
		cout<<"\n\tEnter array ["<<i<<"] : ";
		cin>>a[i];
	}
	cout<<"\n\n";
}
	
void Matrix :: display()
{
	for(i=0;i<5;i++)
	{
		cout<<"\n\tEnter array ["<<i<<"] : ";
		cout<<""<<a[i]<<"";
	}
}
	
void Matrix :: operator +(Matrix obj)
{
	for(i=0;i<5;i++)
	{

    	c[i] = a[i]+obj.a[i];
	}
	cout<<"\n\n\tAddition of two array is : ";
	for(i=0;i<5;i++)
	{
		cout<<c[i]<<" ";
	}
}
int main()
{
	
    Matrix a1,b1;
    a1.accept();
    b1.accept();
    cout<<"\n\n\tfirst array is : ";
    a1.display();
    cout<<"\n\n\tsecond array is : ";
    b1.display();
    a1+b1;

	return 0;
}
