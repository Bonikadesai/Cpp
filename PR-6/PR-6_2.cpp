#include<iostream>
using namespace std;

class member{
	public:
		void getData()
		{
			cout << "Hello World.." << endl;
		}
		void getData(int id)
		{
			cout << "Id\t : " << id << endl;
		}
		void getData(string name,string role)
		{
			cout << "Name\t : " << name << endl
				 << "Role\t : " << role << endl;
		}
		void getData(int age,double exp,string city)
		{
			cout << "Age\t : " << age << endl
				 << "Exp\t : " << exp << endl
				 << "City\t : " << city << endl;
		}
};

int main()
{
	member m;
	
	m.getData();
	m.getData(1663);
	m.getData("Bonika","Fultter_Developer");
	m.getData(19,2,"Surat");
}
