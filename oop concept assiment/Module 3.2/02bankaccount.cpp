//Define a class to represent a bank account. Include the following members......................

#include <iostream>
using namespace std;

class bankdetail
{
	string dptr_name;
	long int acc_num;
	string typ_acc;
	int total_amt;
	
	public :
			
			void getvalue();
			void putvalue();		
};

void bankdetail :: getvalue()
{
	cout<<"\n\n\t Enter Depositor Name : ";
	cin>>dptr_name;

	cout<<"\n\n\t Enter Account Number : ";
	cin>>acc_num;

	cout<<"\n\n\t Enter Account Type : ";
	cin>>typ_acc;

	cout<<"\n\n\t Enter Account Amount : ";
	cin>>total_amt;
}

void bankdetail :: putvalue()
{
	cout<<"\n\n\t Depositor Name : "<<dptr_name;
	cout<<"\n\n\t Account Number : "<<acc_num;
	cout<<"\n\n\t Account Type : "<<typ_acc;
	cout<<"\n\n\t Total Amount : "<<total_amt;
}

main()
{
	int size = 30;
	cout<<"\n\n\t How many data about depositor you want to see ? : ";
	cin>>size;
	
	bankdetail b_obj[size];
	
	for(int p=0; p<size; p++)
	{
		cout<<"\n\n\t "<<p<<" Data Mamber : ";
		
		b_obj[p].getvalue();
	}
	for(int p=0; p<size; p++)
	{
		cout<<"\n\n\t "<<p<<" Data Mamber : ";
		
		b_obj[p].putvalue();
	}
}