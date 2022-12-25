#include<iostream>
using namespace std;

class Employee{
	private:
		int emp_id;
		string emp_name;
		string emp_role;
		int emp_age;
		int emp_salary;
		double emp_experience;
		string emp_city;
		string emp_company_name;
		
	public:
		void setData()
		{
			cout << "Enter Employee Id : ";
			cin >> emp_id;
			cout << "Enter Employee Name : ";
			cin >> emp_name;
			cout << "Enter Employee Role : ";
			cin >> emp_role;
			cout << "Enter Employee Age : ";
			cin >> emp_age;
			cout << "Enter Employee Salary : ";
			cin >> emp_salary;
			cout << "Enter Employee Experience : ";
			cin >> emp_experience;
			cout << "Enter Employee City : ";
			cin >> emp_city;
			cout << "Enter Employee Company Name : ";
			cin >> emp_company_name;
		}
		
		void getData()
		{
			cout << endl << "Employee Id\t\t : " << emp_id << endl
				<< "Employee Name\t\t : " << emp_name << endl
				<< "Employee Role\t\t : " << emp_role << endl
				<< "Employee Age\t\t : " << emp_age << endl
				<< "Employee Salary\t\t : " << emp_salary << endl
				<< "Employee Experience\t : " << emp_experience << endl
				<< "Employee City\t\t : " << emp_city << endl
				<< "Employee Company Name\t : " << emp_company_name << endl;
		}
}; 

int main()
{
	Employee e1,e2,e3,e4,e5;
	
	e1.setData();
	e2.setData();
	e3.setData();
	e4.setData();
	e5.setData();
	
	e1.getData();
	e2.getData();
	e3.getData();
	e4.getData();
	e5.getData();
}
