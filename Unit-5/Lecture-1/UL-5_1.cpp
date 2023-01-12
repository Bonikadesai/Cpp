#include<iostream>
using namespace std;

class student{
	private:
		int stu_id;
		string stu_name;
		int stu_age;
		string stu_course;
		string stu_email;
		string stu_city;
		string stu_college;
		
	public:
		void setData()
		{
			cout << "Enter Student Id : ";
			cin >> stu_id;
			cout << "Enter Student Name : ";
			cin >> stu_name;
			cout << "Enter Student Age : ";
			cin >> stu_age;
			cout << "Enter Student Course : ";
			cin >> stu_course;
			cout << "Enter Student Email : ";
			cin >> stu_email;
			cout << "Enter Student City : ";
			cin >> stu_city;
			cout << "Enter Student College Name : ";
			cin >> stu_college;
		}
		
		void getData()
		{
			cout << endl << "Student Id\t : " << stu_id << endl
						 << "Student Name\t : " << stu_name << endl
						 << "Student Age\t : " << stu_age << endl
						 << "student Course\t : " << stu_course << endl
						 << "Student Email\t : " << stu_email << endl
						 << "Student City\t : " << stu_city << endl
						 << "Student College\t : " << stu_college << endl;
		}
		
		static void header()
		{
			system("cls");
			cout << "S_id\tS_name\tS_age\tS_city\tS_clg\tS_cors\tS_email\n======= ======= ======= ======= ======= ======= =======\n";
		}
		
		void getDataInTable()
		{
			cout << stu_id << "\t" << stu_name << "\t" << stu_age << "\t" << stu_course << "\t" << stu_city << "\t" << stu_college << "\t" << stu_email << endl; 
		}
};

int main()
{
	int n;
	
	cout << "Enter number of Student : ";
	cin >> n;
	
	student s[n];
	
	for(int i=0 ; i<n ; i++)
	{
		s[i].setData();
	}
	
	student::header();
	
	for(int i=0 ; i<n ; i++)
	{
		s[i].getDataInTable();
	}
}
