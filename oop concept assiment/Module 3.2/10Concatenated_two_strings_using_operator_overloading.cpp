//Write a program to concatenate the two strings using Operator Overloading.

#include<iostream>
#include<string.h>
using namespace std;

class String
{
        public:
                char name[20];
        public:
                void accept_string() //user enter string
                {
                        cout<<"\n\n\tEnter String : ";
                        cin>>name;
                }
                void display_string() //display the string
                {
                        cout<<name;
                }
                String operator+(String x)  
                {
                        String s;
                        strcat(name,x.name);
                        strcpy(s.name,name);
                        return s;
                }
};

int main()
{
        String str1, str2, str3;

        str1.accept_string();
        str2.accept_string();

        cout<<"\n\n\t----------------------------------------------";
        cout<<"\n\n\tFirst String is           :  ";
        str1.display_string();   

        cout<<"\n\n\tSecond String is          :  ";
        str2.display_string();  

        cout<<"\n\n\t----------------------------------------------";
        str3=str1+str2;         
        cout<<"\n\n\tConcatenated String is    :  ";
        str3.display_string();
}    

       
