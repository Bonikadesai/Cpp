<center><h1>Unit_3 : OOP Concept</h1></center>

><u>**Aim**</u> : 1. WAP to get and display 5 Employees
information using class and object by including
below mentioned attributes:
- emp_id
- emp_name
- emp_role
- emp_age
- emp_salary
- emp_experience
- emp_city
- emp_company_name

><u>**Program**</u> : 

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

><u>**Output**</u> :

<br>

><u>**Aim**</u> : 2. WAP to get and display 4 Cars information
using class and object by including below
mentioned attributes:
- car_id
- car_company_name
- car_color
- car_model
- car_release_year

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    class Car{
        private:
            int car_id;
            string company_name;
            string car_color;
            string car_model;
            int car_relese_year;
            
        public:
            
            void setData()
            {
                cout << "Enter Car Id : ";
                cin >> car_id; 
                cout << "Enter Car Company Name : ";
                cin >> company_name;
                cout << "Enter Car Color : ";
                cin >> car_color;
                cout << "Enter Car Model : ";
                cin >> car_model;
                cout << "Enter Car Relese Year : ";
                cin >> car_relese_year;	
            }
            
            void getData()
            {
                cout << endl << "Car Name\t : " << car_id << endl
                    << "Car Company Name : " << company_name << endl
                    << "Car Color\t : " << car_color << endl
                    << "Car Model\t : " << car_model << endl
                    << "Car Relese Year : " << car_relese_year << endl; 
            }
    };

    int main()
    {
        Car c1,c2,c3,c4;
        
        c1.setData();
        c2.setData();
        c3.setData();
        c4.setData();
        
        c1.getData();
        c2.getData();
        c3.getData();
        c4.getData();
        return 0;
    }

><u>**Output**</u> :

<br>