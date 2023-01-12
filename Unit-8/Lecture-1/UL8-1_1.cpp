#include<iostream>
using namespace std;

class admin{
    private :
        int total_annual_revenue;
    protected :
        string can_terminate;
        int manager_salary;
    public :
       string company_name;
       int employee_salary;
	   int total_staff;

       void setData(){
        cout << "Enter the Company Name : ";
        cin  >> company_name;
        cout << "Enter the Manager Salary : ";
        cin  >> manager_salary;
        cout << "Enter the Employee Salary : ";
        cin  >> employee_salary;
        cout << "Enter the Total Staff Member : ";
        cin  >> total_staff;
        cout << "Enter the Can Terminate : ";
        cin  >> can_terminate;
        cout << "Enter the Annual Revenue : ";
        cin  >> total_annual_revenue;

        cout << endl << "Company Name\t\t : " << company_name << endl
		             << "Manager Salary\t\t : " << manager_salary << endl
		             << "Employe Salary\t\t : "<< employee_salary << endl
		             << "Total Staff Member\t : " << total_staff << endl
		             << "Can Terminate\t\t : " << can_terminate << endl
		             << "Annual Revenue\t\t : " << total_annual_revenue << endl;
              }
};

class manager : protected admin{
    int m;
    protected :
    void setData(){
        admin :: setData();
        m = manager_salary;
        
        cout << endl << "Company Name\t\t : " << company_name << endl
             << "Manager Salary\t\t : " << m << endl
             << "Employe Salary\t\t : "<< employee_salary << endl
             << "Total Staff Member\t : " << total_staff << endl
             << "Can Terminate\t\t : " << can_terminate << endl;
             manager_salary = 0;
              }
};

class employees : manager{
   public :
    void setData(){
        manager :: setData();
        
        cout << endl << "Company Name\t\t : " << company_name << endl
		             << "Employe Salary\t\t : "<< employee_salary << endl
		             << "Total Staff Member\t : " << total_staff << endl;
              }
};
int main(){
    employees E;
    E.employees ::setData();

}



