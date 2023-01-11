#include<iostream>
using namespace std;
/*
	- company_name
	- manager_salary
	- employee_salary
	- total_staff
	- total_annual_revenue
	- can_terminate
*/
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

       void setDataA(){
        cout << "Enter the company name : ";
        cin  >> company_name;
        cout << "Enter the manager salary : ";
        cin  >> manager_salary;
        cout << "Enter the employee salary : ";
        cin  >> employee_salary;
        cout << "Enter the total staff member : ";
        cin  >> total_staff;
        cout << "Enter the can terminate : ";
        cin  >> can_terminate;
        cout << "Enter the annual revenue : ";
        cin  >> total_annual_revenue;

		void getDataA()
		{
			cout << endl << "Company Name\t : " << company_name << endl
			             << "Manager Salary\t : " << manager_salary << endl
			             << "Employe Salary\t : " << employee_salary << endl
			             << "Total Staff Member\t : " << total_staff << endl
			             << "Can Terminate\t : " << can_terminate << endl
		            	 << "Annual Revenue\t : " << total_annual_revenue <<endl;
		}
};

class manager : protected admin{
    	int m;
    protected :
    	void setDataM()
		{
	        admin :: setDataA();
	        m = managersalary;
		
			cout << endl << "Company Name\t : " << company_name << endl
			             << "Manager Salary\t : " << m << endl
			             << "Employe Salary\t : " << employee_salary << endl
			             << "Total Staff Member\t : " << total_staff << endl
			             << "Can Terminate\t : " << can_terminate << endl;
			             managersalary = 0;
		}
};

class employees : manager{
   public :
    void setDataE(){
        manager :: setDataM();
    
        cout << "Company Name : " << company_name << endl
             << "Employe Salary : " << employee_salary << endl
             << "Total Staff Member : " << total_staff << endl;
              }
};
int main(){
    employees E;
    E.employees ::setDataE();

}


