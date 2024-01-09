//Write a program to swap the two numbers using friend function without using third variable
#include<iostream>
using namespace std;

class Swap
{
	public:
	int a,b;
	
	public:
		
		friend void swap(Swap obj);
		
};

void swap(Swap obj)
{

	cout<<"\n\n\tEnter the value for a : ";
	cin>>obj.a;
	cout<<"\n\n\tEnter the value for b : ";
	cin>>obj.b;

	obj.a=obj.a+obj.b; //swap the number
	obj.b=obj.a-obj.b;
	obj.a=obj.a-obj.b;

	cout<<"\n\n\tSwapping numbers"<<"\n\n\ta :"<<obj.a<<endl<<"\tb :"<<obj.b;
}

int main()
{
	Swap ob;
	swap(ob);
	
	return 0;
}