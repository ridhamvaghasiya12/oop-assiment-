#include<iostream>
using namespace std;

class person
{
	public:
		string name;
		int age;
		void input()
		{
			cout<<"\n\n\t--------------presonal Details-------";
			cout<<"\n\n\tEnter name : ";
			cin>>name;
			cout<<"\n\n\tAge : ";
			cin>>age;
		}
};

class student : public person
{
	public :
		int percentage;
		
		
		void per()
		{
			cout<<"\n\n\tpercentage of "<<person::name<<" : ";
			cin>>percentage;
		}
};

class teacher : public student
{
	public:
		string teac;
		int salary;
		
		void sal()
		{
			cout<<"\n\n\tName of teacher : ";
			cin>>teac;
			cout<<"\n\n\tSalary of teacher : ";
			cin>>salary;
			
			cout<<"\n\n\t---------  Data inserted-----------";
			
			cout<<"\n\n\tName : "<<person::name;
			cout<<"\n\tAge : "<<person::age;
			cout<<"\n\tpercentage : "<<student::percentage;
			cout<<"\n\tName of teacher : "<<teacher::teac;
			cout<<"\n\tSalary of teacher : "<<teacher::salary;
			
		}
};

int main()
{
	teacher obj;
	obj.input();
	obj.per();
	obj.sal();
}
