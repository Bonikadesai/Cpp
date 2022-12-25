#include<iostream>
using namespace std;

class student{
	private:
		int s_id;
		string s_name;
		int s_std;
	public:
		void setData()
		{
			cout << "Enter Student Id : ";
			cin >> s_id;
			cout << "Enter Student Name : ";
			cin >> s_name;
			cout << "Enter Student Standerd : ";
			cin >> s_std;
		}	
		
		void getData()
		{
			cout << endl << "ID\t : " << s_id << endl
						 << "Name\t : " << s_name << endl
						 << "Std\t : " << s_std << endl;
		}
};

int main()
{
	student s1;
	
	s1.setData();
	
	s1.getData();
}
