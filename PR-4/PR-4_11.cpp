#include<iostream>
using namespace std;

class emp{
	private:
		int id;
		string name;
		int age;
		double exp;
	public:
		void setData(int i , int n)
		{
			system("cls");
			cout << "Employee no. : " << i << "/" << n << endl;
			
			cout << "Enter Employee id : ";
			cin >> id;
			cout << "Enter Employee name : ";
			cin >> name;
			cout << "Enter Employee age : ";
			cin >> age;
			cout << "Enter Employee Exp : ";
			cin >> exp;
		}
		void getData()
		{
			cout << endl << "Id\t : " << id << endl
						 << "Name\t : " << name << endl
						 << "Age\t : " << age << endl
						 << "Exp\t : " << exp << endl;
		}	
		static void header()
		{
			system("cls");
			cout << "Id\tName\tAge\Exp\n======= ======= ======= =======\n";
		}
		void getDataInTable()
		{
			cout << id << "\t" << name << "\t" << age << "\t" << exp << endl;
		}
};

int main()
{
	int n,i;
	
	cout << "Enter the Number of Employee : ";
	cin >> n;
	
	emp e[n];
	
	for(i=0 ; i<n ; i++)
	{
		e[i].setData(i+1,n);
	}
	
	emp::header();
	
	for(i=0 ; i<n ; i++)
	{
		e[i].getDataInTable();
	}
}
