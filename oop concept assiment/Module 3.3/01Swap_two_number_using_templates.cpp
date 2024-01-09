//Write a program of to swap the two values using templates

#include<iostream>
using namespace std;

template <typename T>
T Swap(T &a, T &b)
{
	T Temp;
	Temp = a;
	a = b;
	b = Temp;
}
int main()
{
	int A, B;
	
	cout<<"\n\n\tEnter value of a : ";
	cin>>A;
	cout<<"\n\n\tEnter value of b : ";
	cin>>B;
	
	Swap(A,B);
	
	cout<<"\n\tAfter passing data to function Tempalte";
	cout<<"\n\n\tA = "<<A<<"\n\tB = "<<B;
}
