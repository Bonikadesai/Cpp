#include<iostream>
using namespace std;

class student{
	private:
		int id;
		string name;
		int age;
		int std;
	public:
		void setData(int i , int n)
		{
			system("cls");
			cout << "Student no. : " << i << "/" << n << endl;
			
			cout << "Enter student id : ";
			cin >> id;
			cout << "Enter student name : ";
			cin >> name;
			cout << "Enter student age : ";
			cin >> age;
			cout << "Enter student std : ";
			cin >> std;
		}
		void getData()
		{
			cout << endl << "Id\t : " << id << endl
						 << "Name\t : " << name << endl
						 << "Age\t : " << age << endl
						 << "Std\t : " << std << endl;
		}	
		static void header()
		{
			system("cls");
			cout << "Id\tName\tAge\tstd\n======= ======= ======= =======\n";
		}
		void getDataInTable()
		{
			cout << id << "\t" << name << "\t" << age << "\t" << std << endl;
		}
};

int main()
{
	int n,i;
	
	cout << "Enter the Number of Student : ";
	cin >> n;
	
	student s[n];
	
	for(i=0 ; i<n ; i++)
	{
		s[i].setData(i+1,n);
	}
	
	student::header();
	
	for(i=0 ; i<n ; i++)
	{
		s[i].getDataInTable();
	}
}
