<h1>Project_4 : Bulider</h1>

><u>**Aim**</u> : 1. WAP to create a class Employee with setter and getter. Which have fields like id, name, role, salary, experience, address, email and contact. Get 5 records.

><u>**Program**</u> : 

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

><u>**Output**</u> : 

![Error Text](https://github.com/Bonikadesai/Cpp/blob/master/PR-4/Image/PR-4_1/Screenshot_20221225_103116.png)

![Error Text](https://github.com/Bonikadesai/Cpp/blob/master/PR-4/Image/PR-4_1/Screenshot_20221225_103139.png)

![Error Text](https://github.com/Bonikadesai/Cpp/blob/master/PR-4/Image/PR-4_1/Screenshot_20221225_103149.png)

<br>

><u>**Aim**</u> : 2. WAP to create a class which Read and print Class, Student details using Two Classes. (Make two classes, create one classe's obj in another class.)

><u>**Program**</u> : 

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

><u>**Output**</u> : 

![Error Text](https://github.com/Bonikadesai/Cpp/blob/master/PR-4/Image/PR-4_2/Screenshot_20221225_103745.png)

<br>

><u>**Aim**</u> : 3. WAP to create a class Hotel with fields like id, name, type, staff_size, room_size, establish_year, address, rating_type and website. Illustrate the use of encapsulation (strict encapsulation) with this keyword.

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    class hotel{
        private:
            int id;
            string name;
            string type;
            int staff_size;
            int room_size;
            int establish_year;
            string address;
            int rating_type;
            string website;
        public:
            void setData(
                int id , string name , string type,
                int staff_size , int room_size , int establish_year,
                string address , double rating_type , string website)
			
                {
                    this->id = id;
                    this->name = name;
                    this->type = type;
                    this->staff_size = staff_size;
                    this->room_size = room_size;
                    this->establish_year = establish_year;
                    this->address = address;
                    this->rating_type = rating_type;
                    this->website = website; 
                }
            void getData(){
                cout << endl << "Id\t\t : " << id << endl
                            << "Name\t\t : " << name << endl
                            << "Type\t\t : " << type << endl
                            << "Staff_Size\t : " << staff_size << endl
                            << "Room_Size\t : " << room_size << endl
                            << "Establish_Year\t : " << establish_year << endl
                            << "Address\t\t : " << address << endl
                            << "Rating_Type\t : " << rating_type << endl
                            << "Website\t\t : " << website << endl;
            }	
    };

    int main()
    {
        hotel h;
        h.setData(7951,"Bonika","Hotel",16,10,6,"Saputara",4.5,"www.bluevelilyhotel");
        h.getData();
    }

><u>**Output**</u> : 

![Error Text](https://github.com/Bonikadesai/Cpp/blob/master/PR-4/Image/PR-4_3/Screenshot_20221225_103841.png)

<br>

><u>**Aim**</u> : 4. WAP to create two class HighSchool and College with fields like id, stu_name, stu_roll_no, stu_standard, stu_age, stu_contact, stu_edu_institute_name and stu_address. Make suitable setter and getter with use of static data members.

><u>**Program**</u> : 

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

><u>**Output**</u> : 

![Error Text](https://github.com/Bonikadesai/Cpp/blob/master/PR-4/Image/PR-4_4/Screenshot_20221225_104204.png)

![Error Text](https://github.com/Bonikadesai/Cpp/blob/master/PR-4/Image/PR-4_4/Screenshot_20221225_104400.png)

<br>

><u>**Aim**</u> : 5. WAP to create a class which have both static data member and static member function. That class gives details of all states in India.

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    class state{
        private:
            string city;
            string district;
            string states;
            static string country;
        public:
            void setData()
            {
                cout << "Enter City Name : ";
                cin >> city;
                cout << "Enter District Name : ";
                cin >> district;
                cout << "Enter State Name : ";
                cin >> states;
            }	
            
            void getData()
            {
                cout << endl << "City\t : " << city << endl
                            << "District : " << district << endl
                            << "State\t : " << states << endl
                            << "Country\t : " << country << endl;
            }
            
    };

    string state::country = "India";

    int main()
    {
        state s;
        s.setData();
        s.getData();
    }
><u>**Output**</u> : 

![Error Text](https://github.com/Bonikadesai/Cpp/blob/master/PR-4/Image/PR-4_5/Screenshot_20221225_104617.png)

<br>

