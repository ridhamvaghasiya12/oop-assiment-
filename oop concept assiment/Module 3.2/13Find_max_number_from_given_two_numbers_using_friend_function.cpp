//Write a program to find the max number from given two numbers using friend function

#include<iostream>
using namespace std;

class Test 
{
	int x, y;

	public:

		void input() 
		{
			cout<<"\n\n\tEnter the number one : ";
			cin>>x;
			cout<<"\n\n\tEnter the number two : ";
			cin>>y;
		}

		friend void find(Test t);
};

void find(Test t) 
{
	if (t.x > t.y) 
	{
		cout << "\n\n\tMax number is : " << t.x;
	} else {
		cout << "\n\n\tMax number is : " << t.y;
	}
}

int main() {

	Test t;
	t.input();
	find(t);

	return 0;
}
