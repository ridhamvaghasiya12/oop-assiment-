/*Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading */

#include <iostream>
using namespace std;

class Calculator {
    
	public:
    	
		void calculate(int num1, int num2) 
		{    
			cout<<"\n\n\tAddition : " << num1 + num2;
            
			cout<<"\n\n\tSubtraction : " << num1 - num2;
            
			cout<<"\n\n\tMultiplication : " << num1 * num2;
            
			cout<<"\n\n\tDivision : " << num1 / num2;
        }

        void calculate(int num1, int num2, char op) 
		{
        	cout<<"\n\n\tEnter the operation you perform('+, -, *, /') : ";
        	cin>>op;
            
			switch(op) 
			{
                case '+':
                    cout<<"\n\n\tAddition: " << num1 + num2;
                    break;
                case '-':
                    cout<<"\n\n\tSubtraction: " << num1 - num2;
                    break;
                case '*':
                    cout<<"\n\n\tMultiplication: " << num1 * num2;
                    break;
                case '/':
                    cout<<"\n\n\tDivision: " << num1 / num2;
                    break;
                default:
                    cout<<"\n\n\tInvalid operator!";
            }
        }
};

int main() {
    Calculator c;
    c.calculate(10, 5);
    c.calculate(10, 5, '*');
    return 0;
}

