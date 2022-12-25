#Project 1

<u>**Aim**</u> : 1. WAP to create a class Employee with setter and getter. Which have fields like id, name, role, salary, experience, address, email and contact. Get 5 records.

<u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    class emp{
	private:
		int id;
		string name;
		string role;
		int salary;
		double exp;
		string address;
		string email;
		long long int contact;
		
	public:
		void setData()
		{
			cout << "Enter Employee Id : ";
			cin >> id;
			cout << "Enter Employee Name : ";
			cin >> name;
			cout << "Enter Employee Role : ";
			cin >> role;
			cout << "Enter Employee Salary : ";
			cin >> salary;
			cout << "Enter Employee Experience : ";
			cin >> exp;
			cout << "Enter Employee Address : ";
			cin >> address;
			cout << "Enter Employee Email : ";
			cin >> email;
			cout << "Enter Employee Contact : ";
			cin >> contact;
		}	
		void getData()
		{
			cout << endl << "ID\t : " << id << endl
						 << "Name\t : " << name << endl
						 << "Role\t : " << role << endl
						 << "Salary\t : " << salary << endl
						 << "Expe\t : " << exp << endl
						 << "Address\t : " << address << endl
						 << "Email\t : " << email << endl
						 << "Contact\t : " << contact << endl;
		}
    };

    int main()
    {
        emp e1,e2,e3,e4,e5;
        
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

<u>**Output**</u> : 

![Error Text]