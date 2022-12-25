#include<iostream>
using namespace std;

class Time{
	private:
		int second1;
		int minute1;
		int hours1;
		int second2;
		int minute2;
		int hours2;
		int second3;
		int minute3;
		int hours3;
		
	public:
		void setData()
		{
			cout << "Enter second1 : ";
			cin >> second1;
			cout << "Enter Minute1 : ";
			cin >> minute1;
			cout << "Enter Hours1 : ";
			cin >> hours1;
			cout << "Enter second2 : ";
			cin >> second2;
			cout << "Enter Minute2 : ";
			cin >> minute2;
			cout << "Enter Hours2 : ";
			cin >> hours2;
		}	
		
		void smh()
		{
			second3 = second1 + second2;
			minute3 = minute1 + minute2;
			hours3  = hours1  + hours2;
			
			while(second3>=60)
			{
				second3 = second3 - 60;
				minute3++;
				minute3 = minute3 - 60;
				hours3++;
			}
		}
		
		void getData()
		{
			cout << endl << "Second1\t : " << second1 << endl
						 << "Minute1\t : " << minute1 << endl
						 << "Hours1\t  : " << hours1  << endl
						 << "Second2\t : " << second2 << endl
						 << "Minute2\t : " << minute2 << endl
						 << "Hours2\t  : " << hours2  << endl
				 <<	endl << "Second\t : " << second3 << endl
						 << "Minute\t : " << minute3 << endl
						 << "Hours\t  : " << hours3  << endl;
		}
}; 

int main()
{
	Time t1;
	
	t1.setData();
	
	t1.smh();
	
	t1.getData();
}
