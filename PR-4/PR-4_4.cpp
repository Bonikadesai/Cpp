#include<iostream>
using namespace std;

//id, stu_name, stu_roll_no, stu_standard, stu_age, stu_contact, stu_edu_institute_name and stu_address//

class highSchool{
	private:
		int id;
		string stu_name;
		int stu_roll_no;
		int stu_standard;
		int stu_age;
		long long int stu_contact;
		static string stu_edu_institute_name;
		string stu_address;
	public:
		void setData()
		{
			cout << "Enter School Student Id : ";
			cin >> id;
			cout << "Enter School Student Name : ";
			cin >> stu_name;
			cout << "Enter School Student Rool No. : ";
			cin >> stu_roll_no;
			cout << "Enter School Student Standerd : ";
			cin >> stu_standard;
			cout << "Enter School Student Age : ";
			cin >> stu_age;
			cout << "Enter School Student Contact : ";
			cin >> stu_contact;
			cout << "Enter School Student Address : ";
			cin >> stu_address;
		}
		void getData()
		{
			cout << endl << "S_S_id\t\t : " << id << endl
						 << "S_S_name\t : " << stu_name << endl
						 << "S_S_roll no\t : " << stu_roll_no << endl
						 << "S_S_std\t\t : " <<  stu_standard << endl
						 << "S_S_age\t\t : " << stu_age << endl
						 << "S_S_Contect\t : " << stu_contact << endl
						 << "S_S_Address\t : " << stu_address << endl;
		}
		
		static void institute()
		{
			cout << "S_S_institute\t : " << stu_edu_institute_name << endl << endl;
		}
};

string highSchool::stu_edu_institute_name = "MBV Science JEE/NEET INSTITUTE";

class college{
	private:
		int id;
		string stu_name;
		int stu_roll_no;
		int stu_standard;
		int stu_age;
		long long int stu_contact;
		static string stu_edu_institute_name;
		string stu_address;
	public:
		void setData()
		{
			cout << "Enter College Student Id : ";
			cin >> id;
			cout << "Enter College Student Name : ";
			cin >> stu_name;
			cout << "Enter College Student Rool No. : ";
			cin >> stu_roll_no;
			cout << "Enter College Student Standerd : ";
			cin >> stu_standard;
			cout << "Enter College Student Age : ";
			cin >> stu_age;
			cout << "Enter College Student Contact : ";
			cin >> stu_contact;
			cout << "Enter College Student Address : ";
			cin >> stu_address;
		}
		void getData()
		{
			cout << endl << "C_S_id\t\t : " << id << endl
						 << "C_S_name\t : " << stu_name << endl
						 << "C_S_roll no\t : " << stu_roll_no << endl
						 << "C_S_std\t\t : " <<  stu_standard << endl
						 << "C_S_age\t\t : " << stu_age << endl
						 << "C_S_Contect\t : " << stu_contact << endl
						 << "C_S_Address\t : " << stu_address << endl;
		}
		
		static void institute()
		{
			cout << "C_S_institute\t : " << stu_edu_institute_name << endl;
		}
};

string college::stu_edu_institute_name = "RED AND WHITE INSTITUTE";

int main()
{
	highSchool h;
	h.setData();
	h.getData();
	highSchool::institute();
	
	college c;
	c.setData();
	c.getData();
	college::institute();
}
