/* Assume a class cricketer is declared. Declare a derived class batsman from  cricketer. 
Data member of batsman. Total runs, Average runs and best  performance. 
Member functions input data, calculate average runs, Display data (Single Inheritance)*/
 
#include<iostream>
#include<string.h>
using namespace std;

class Cricketer
{
       public:
	     char team1[30]; char team2[30];
		 int ch=0, t1=0, t2=0, t1score=0, t2score=0, i, avgt1, avgt2;
		 
		 void display()
		 {
		 	cout<<"\n\n\t-------------Welcome to cricket tournament-----------";
		 	
		 	cout<<endl<<"\n\n\tTournament info :\n\n\tTotal over :20 \n\n\tTournament timing :8:00 am to 12:00 pm";
		 	
			cout<<"\n\n\tFirst team name :";
		 	gets(team1);
		 	cout<<"\n\n\tSecond team name :";
		 	gets(team2);
		 	for(i=1;i<=3;i++)
		 	{
		 		cout<<"\n\n\tDay ("<<i<<")";
		 		cout<<endl<<"\n\n\tWho got to bat first";
		 		here:
		 		cout<<endl<<"\n\n\tpress 1 for team "<<team1<<" and "<<"2 for team "<<team2<<" : ";
		 		cin>>ch;
		 		
				if(ch==1)
		 		{
		 			T:
		 			cout<<"\n\n\tTotal Run scored by "<<team1<<" : ";
		 			cin>>t1;
		 			if(t1<=0 || t1>=300)
		 			{
		 				cout<<"\n\n\tThese scores are not practicle. Try again";
		 				goto T;
					}
					t1score+=t1;
					
					t:
		 			cout<<"\n\n\tTotal Run scored by "<<team2<<" : ";
		 			cin>>t2;
		 			if(t2<=0 || t2>=300)
		 			{
		 				cout<<"\n\n\tThese scores are not practicle. Try again";
		 				goto t;
					}
					t2score+=t2;
	
				}
				else if(ch==2)
				{
					A:
		 			cout<<"\n\n\tTotal Run scored by "<<team2<<" : ";
		 			cin>>t2;
		 			if(t2<=0 || t2>=300)
		 			{
		 				cout<<"\n\n\tThese scores are not practicle. Try again";
		 				goto A;
					}
					t2score+=t2;
					
					a:
		 			cout<<endl<<"\n\n\tTotal Run scored by "<<team1<<" : ";
		 			cin>>t1;
		 			if(t1<=0 || t1>=300)
		 			{
		 				cout<<"\n\n\tThese scores are not practicle. Try again";
		 				goto a;
					}
					t1score+=t1;
				}
		 		else 
				{
		 		    cout<<"\n\n\tinvalid input please try again";
					goto here;	
				}
		 			
			}
		 	avgt1 = t1score/3;
			avgt2 = t2score/3;    
		 	   
			}	
			
};
class Batsman :public Cricketer
{
	public:
		void total_run()
		{
			cout<<"\n\n\tTotal runs scored by team "<<Cricketer::team1<<" : "<<Cricketer::t1score;
			cout<<"\n\tTotal runs scored by team "<<Cricketer::team2<<" : "<<Cricketer::t2score;
		}
		void average_runs()
		{
			cout<<endl<<"\n\n\tAverage runs scored by team "<<Cricketer::team1<<" : "<<Cricketer::avgt1;
	    	cout<<endl<<"\n\tAverage runs scored by team "<<Cricketer::team2<<" : "<<Cricketer::avgt2;
		}
};
int main()
{
	Batsman obj1;
	
	obj1.display();
	cout<<endl<<"\n\n\t-----------Match Results----------------------";
	obj1.total_run();
	obj1.average_runs();
}
