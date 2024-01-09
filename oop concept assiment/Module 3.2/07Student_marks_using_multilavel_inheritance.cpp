/*Assume that the test results of a batch of students are stored in three different 
classes. Class Students are storing the roll number. Class Test stores the marks 
obtained in two subjects and class result contains the total marks obtained in 
the test. The class result can inherit the details of the marks obtained in the 
test and roll number of students. (Multilevel Inheritance)*/
 
#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	public:
	
		int roll;
		
		void display()
		{
			cout<<"\n\n\t-------- Date of Batch result----------";
			cout<<"\n\n\tEnter Roll number :";
			cin>>roll;
		}
};
class test
{
	public:
		int maths,science;
		
		void display1()
		{
			cout<<"\n\n\tEach subject is of 100 marks ";
			
			cout<<"\n\n\tmarks obtained in maths ";
			cin>>maths;
			
			cout<<"\n\n\tmarks obtained in science :";
			cin>>science;
		}
};
class Result : public Student,public test  //multi level inheritance 
{
	public:
		
		void display2()
		{
			cout<<"\n\n\t--------------Data inserted--------------";
			cout<<"\n\n\tRoll number of student :"<<Student ::roll;
			cout<<"\n\n\tTotal marks obtained :"<<test::maths+test::science;
		}
};
int main()
{
   Result obj;
   obj.display();
   obj.display1();
   obj.display2();	
}
