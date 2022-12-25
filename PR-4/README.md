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

><u>**Aim**</u> : 6. WAP to demonstrate example of default constructor or no argument constructor.

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    class hotel{
        public:
            hotel (){ 
                cout << "Welcome to the BLUE-VELLY HOTEL.." << endl;
            }
    };

    int main()
    {
        hotel h;
    }

><u>**Output**</u> : 

![Error Text](https://github.com/Bonikadesai/Cpp/blob/master/PR-4/Image/PR-4_6/Screenshot_20221225_104733.png)

<br>

><u>**Aim**</u> : 7. WAP to demonstrate example of parameterized constructor.

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    class hotel{
        private:
            int id;
            string name;
        public:
            hotel(int id , string name)
            {
                this->id = id;
                this->name = name;
                
                cout << "Id\t : " << id << endl;
                cout << "Name\t : " << name << endl;
            }	
    };

    int main()
    {
        hotel h(101 , "John Deo");
    }

><u>**Output**</u> : 

![Error Text](https://github.com/Bonikadesai/Cpp/blob/master/PR-4/Image/PR-4_7/Screenshot_20221225_104831.png)

<br>

><u>**Aim**</u> : 8. WAP to demonstrate example of copy constructor.

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    class hotel{
        private:
            int id;
            string name;
        public:
            
            hotel(int id , string name)
            {
                this->id = id;
                this->name = name;
                getData();
            }
            
            hotel(hotel &h)
            {
                id = h.id;
                name = h.name;
                getData();	
            }
            void getData()
            {
                cout << "Id\t : " << id << endl
                    << "H_name\t : " << name << endl;	
            }
    };

    int main()
    {
        hotel h1(1,"Navjivan");
        hotel h2(2,"Amiras");
        hotel h3(3,"Avadh");
        hotel h4 = h1;
        h4.getData();
        hotel h5(h2);
        
    }

><u>**Output**</u> : 

![Error Text](https://github.com/Bonikadesai/Cpp/blob/master/PR-4/Image/PR-4_8/Screenshot_20221225_104920.png)

<br>

><u>**Aim**</u> : 9. WAP to demonstrate example of destructors.

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    class hotel{
        private:
            int id;
            string name;
            static int count;
        public:
            hotel()
            {
                id = count;
                cout << "Id\t : " << id << endl;
                count++;
            }
            
            ~hotel()
            {
                cout << "Id : " << id << " is deleted.." << endl;
            }	
    };

    int hotel::count=1;

    int main()
    {
        hotel h[10];
    }

><u>**Output**</u> : 

![Error Text](https://github.com/Bonikadesai/Cpp/blob/master/PR-4/Image/PR-4_9/Screenshot_20221225_105028.png)

<br>

><u>**Aim**</u> : 10. WAP to create a class which Set values of data members using default, parameterized and copy constructor.

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    class hotel{
        private:
            int id;
            string name;
        public:
            hotel ()
            { 
                cout << "Welcome to the BLUE-VELLY HOTEL.." << endl << endl;
            }
                
            hotel(int id , string name)
            {
                this->id = id;
                this->name = name;
                getData();
            }
            
            hotel(hotel &h)
            {
                id = h.id;
                name = h.name;
                getData();	
            }
            void getData()
            {
                cout << "Id\t : " << id << endl
                    << "H_name\t : " << name << endl;	
            }
    };

    int main()
    {
        hotel h;
        hotel h1(1,"Navjivan");
        hotel h2(2,"Amiras");
        hotel h3(3,"Avadh");
        hotel h4 = h1;
        h4.getData();
        hotel h5(h2);
    }

><u>**Output**</u> : 

![Error Text](https://github.com/Bonikadesai/Cpp/blob/master/PR-4/Image/PR-4_10/Screenshot_20221225_105119.png)

<br>

><u>**Aim**</u> : 11. WAP to create a class which illustrate the use of constant object.

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    class emp{
        private:
            int id;
            string name;
            int age;
            double exp;
        public:
            void setData(int i , int n)
            {
                system("cls");
                cout << "Employee no. : " << i << "/" << n << endl;
                
                cout << "Enter Employee id : ";
                cin >> id;
                cout << "Enter Employee name : ";
                cin >> name;
                cout << "Enter Employee age : ";
                cin >> age;
                cout << "Enter Employee Exp : ";
                cin >> exp;
            }
            void getData()
            {
                cout << endl << "Id\t : " << id << endl
                            << "Name\t : " << name << endl
                            << "Age\t : " << age << endl
                            << "Exp\t : " << exp << endl;
            }	
            static void header()
            {
                system("cls");
                cout << "Id\tName\tAge\tExp\n======= ======= ======= =======\n";
            }
            void getDataInTable()
            {
                cout << id << "\t" << name << "\t" << age << "\t" << exp << endl;
            }
    };

    int main()
    {
        int n,i;
        
        cout << "Enter the Number of Employee : ";
        cin >> n;
        
        emp e[n];
        
        for(i=0 ; i<n ; i++)
        {
            e[i].setData(i+1,n);
        }
        
        emp::header();
        
        for(i=0 ; i<n ; i++)
        {
            e[i].getDataInTable();
        }
    }

><u>**Output**</u> : 

![Error Text](https://github.com/Bonikadesai/Cpp/blob/master/PR-4/Image/PR-4_11/Screenshot_20221225_105418.png)

<br>

><u>**Aim**</u> : 10. WAP to create a class which Set values of data members using default, parameterized and copy constructor.

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    class hotel{
        private:
            int id;
            string name;
        public:
            hotel ()
            { 
                cout << "Welcome to the BLUE-VELLY HOTEL.." << endl << endl;
            }
                
            hotel(int id , string name)
            {
                this->id = id;
                this->name = name;
                getData();
            }
            
            hotel(hotel &h)
            {
                id = h.id;
                name = h.name;
                getData();	
            }
            void getData()
            {
                cout << "Id\t : " << id << endl
                    << "H_name\t : " << name << endl;	
            }
    };

    int main()
    {
        hotel h;
        hotel h1(1,"Navjivan");
        hotel h2(2,"Amiras");
        hotel h3(3,"Avadh");
        hotel h4 = h1;
        h4.getData();
        hotel h5(h2);
    }

><u>**Output**</u> : 

![Error Text](https://github.com/Bonikadesai/Cpp/blob/master/PR-4/Image/PR-4_10/Screenshot_20221225_105119.png)

<br>

><u>**Aim**</u> : 12. WAP to create a class for student to get and print details of N students. (with use of array of objects)

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    class student{
        private:
            int id;
            string name;
            int age;
            int std;
        public:
            void setData(int i , int n)
            {
                system("cls");
                cout << "Student no. : " << i << "/" << n << endl;
                
                cout << "Enter student id : ";
                cin >> id;
                cout << "Enter student name : ";
                cin >> name;
                cout << "Enter student age : ";
                cin >> age;
                cout << "Enter student std : ";
                cin >> std;
            }
            void getData()
            {
                cout << endl << "Id\t : " << id << endl
                            << "Name\t : " << name << endl
                            << "Age\t : " << age << endl
                            << "Std\t : " << std << endl;
            }	
            static void header()
            {
                system("cls");
                cout << "Id\tName\tAge\tstd\n======= ======= ======= =======\n";
            }
            void getDataInTable()
            {
                cout << id << "\t" << name << "\t" << age << "\t" << std << endl;
            }
    };

    int main()
    {
        int n,i;
        
        cout << "Enter the Number of Student : ";
        cin >> n;
        
        student s[n];
        
        for(i=0 ; i<n ; i++)
        {
            s[i].setData(i+1,n);
        }
        
        student::header();
        
        for(i=0 ; i<n ; i++)
        {
            s[i].getDataInTable();
        }
    }

><u>**Output**</u> : 

![Error Text](https://github.com/Bonikadesai/Cpp/blob/master/PR-4/Image/PR-4_12/Screenshot_20221225_105601.png)

<br>

><u>**Aim**</u> : 13. WAP to make Railway Reservation System.
Requirements:
(A) User Input Train Number , Train Name , Source , Destination , Train Time.
(B) Display Record By Search Train Number.
(C) Minimum 3 Input Train Record.

><u>**Program**</u> : 

   #include<iostream>
    using namespace std;

    class railWay{
        private:
            int Train_Number;
            string Train_Name;
            string Source;
            string Destination;
            int Train_Time;
        public:
            void setData()
            {
                cout << "Enter Train Number : ";
                cin >> Train_Number;
                cout << "Enter Train Name : ";
                cin >> Train_Name;
                cout << "Enter Train Source : ";
                cin >> Source;
                cout << "Enter Train Destination : ";
                cin >> Destination;
                cout << "Enter Train Time : ";
                cin >> Train_Time;
            }
            
            void getData()
            {
                cout << endl << "T_Number\t : " << Train_Number << endl
                            << "T_Name\t : " << Train_Name << endl
                            << "T_Source\t : " << Source << endl
                            << "T_Destination\t : " << Destination << endl
                            << "T_Time\t : " << Train_Time << endl;
            }
                
            void display()
            {
                if(Train_Number<=1000 || Train_Number<=2000 || Train_Number<=3000)
                {
                    cout << endl << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                    cout << Train_Name << " train is available... " << endl;
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                }
                else
                {
                    cout << endl << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                    cout << Train_Name << " train is Come in " << 12-Train_Time<< " o'clock at platform..." << endl;
                    cout <<  "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                }
            }	
            static void header()
            {
                system("cls");
                cout << "T_No.\tT_Name\tT_Sour\tT_Desti\tT_Time\n======= ======= ======= ======= =======\n";
            }
            
            void getDataInTable()
            {
                cout << Train_Number << "\t" << Train_Name << "\t" << Source << "\t" << Destination << "\t" << Train_Time << endl;
            }
    };

    int main()
    {
        railWay r1,r2,r3;
        
        r1.setData();
        r2.setData();
        r3.setData();
        
        railWay::header();
        
        r1.getDataInTable();
        r2.getDataInTable();
        r3.getDataInTable();
        
        r1.display();
        r2.display();
        r3.display();
    }

><u>**Output**</u> : 

![Error Text](https://github.com/Bonikadesai/Cpp/blob/master/PR-4/Image/PR-4_13/Screenshot_20221225_110413.png)

<br>

><u>**Aim**</u> : 15. WAP which perform Addition of members of two different classes using friend Function.

><u>**Program**</u> : 

   #include<iostream>
    using namespace std;

    class sum2;

    class sum1{
        private:
            int a = 10;
        public:
            friend void add(sum1,sum2);
    }; 

    class sum2{
        private:
            int b = 20;
        public:
            friend void add(sum1,sum2);	
    };

    void add(sum1 s1 , sum2 s2)
    {
        cout << "Addition : " << s1.a + s2.b << endl;
    }

    int main()
    {
        sum1 s1;
        sum2 s2;
        add(s1,s2);
    }

><u>**Output**</u> : 

![Error Text](https://github.com/Bonikadesai/Cpp/blob/master/PR-4/Image/PR-4_15/Screenshot_20221225_110511.png)

<br>
