#include<iostream>
using namespace std;

class student1{
	
	public:
		int id;
		string name;
		int std;
		
		void setData()
		{
			cout << "Enter Student Id : ";
			cin >> id;
			cout << "Enter Student Name : ";
			cin >> name;
			cout << "Enter Student standerd : ";
			cin >> std;
		}	
};

class student2{
	public:
		void getData()
		{
		student1 s1;
		s1.setData();
		
			cout << endl << "Id\t : " << s1.id << endl
						 << "Name\t : " << s1.name << endl
						 << "Std\t : " << s1.std << endl;
		}
};

int main()
{
	student2 s2;
	s2.getData();
}
