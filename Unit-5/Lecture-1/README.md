<center><h1>Unit_5 : DATA ENCAPSULATION</h1></center>

><u>**Aim**</u> : 1. WAP to get and display 5 Students information using
encapsulation by including below mentioned
attributes:
- stu_id
- stu_name
- stu_age
- stu_course
- stu_email
- stu_city
- stu_college

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    class student{
        private:
            int stu_id;
            string stu_name;
            int stu_age;
            string stu_course;
            string stu_email;
            string stu_city;
            string stu_college;
            
        public:
            void setData()
            {
                cout << "Enter Student Id : ";
                cin >> stu_id;
                cout << "Enter Student Name : ";
                cin >> stu_name;
                cout << "Enter Student Age : ";
                cin >> stu_age;
                cout << "Enter Student Course : ";
                cin >> stu_course;
                cout << "Enter Student Email : ";
                cin >> stu_email;
                cout << "Enter Student City : ";
                cin >> stu_city;
                cout << "Enter Student College Name : ";
                cin >> stu_college;
            }
            
            void getData()
            {
                cout << endl << "Student Id\t : " << stu_id << endl
                            << "Student Name\t : " << stu_name << endl
                            << "Student Age\t : " << stu_age << endl
                            << "student Course\t : " << stu_course << endl
                            << "Student Email\t : " << stu_email << endl
                            << "Student City\t : " << stu_city << endl
                            << "Student College\t : " << stu_college << endl;
            }
            
            static void header()
            {
                system("cls");
                cout << "S_id\tS_name\tS_age\tS_courseS_email\tS_city\tS_college\n======= ======= ======= ======= ======= ======= =======\n";
            }
            
            void getDataInTable()
            {
                cout << stu_id << "\t" << stu_name << "\t" << stu_age << "\t" << stu_course << "\t" << stu_email << "\t" << stu_city << "\t" << stu_college << endl; 
            }
    };

    int main()
    {
        int n;
        
        cout << "Enter number of Student : ";
        cin >> n;
        
        student s[n];
        
        for(int i=0 ; i<n ; i++)
        {
            s[i].setData();
        }
        
        student::header();
        
        for(int i=0 ; i<n ; i++)
        {
            s[i].getDataInTable();
        }
    }

><u>**Output**</u> :

<br>

><u>**Aim**</u> : 2. WAP to get and display 5 Customers
information using encapsulation by including
below mentioned attributes:
- cust_id
- cust_name
- cust_age
- cust_telecome_brand_name (like Jio, Airtel, Vi, etc.)
- cust_mobile_number
- cust_city
- cust_simcard_validity (in years)

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    ostream &t(ostream &output)
    {
        return output << "\t";
    }

    class cust{
        private:
            int cust_id;
            string cust_name;
            int cust_age;
            string cust_telecome_brand_name;
            long long int cust_mobile_number;
            string cust_city;
            int cust_simcard_validity;
        public:
            void setData(int i , int n)
            {
                system("cls");
                cout << "Customer no. : " << i << "/" << n << endl;
                cout << "Enter Customer Id : ";
                cin >> cust_id;
                cout << "Enter Customer Name : ";
                cin >> cust_name;
                cout << "Enter Customer Age : ";
                cin >> cust_age;
                cout << "Enter Customer Telecom Brand Name : ";
                cin >> cust_telecome_brand_name;
                cout << "Enter Customer Mobile Number : ";
                cin >> cust_mobile_number;
                cout << "Enter Customer City : ";
                cin >> cust_city;
                cout << "Enter Customer Simcard Validity : ";
                cin >> cust_simcard_validity;
            }
            void getData()
            {
                cout << endl << "Customer ID\t\t\t : " << cust_id << endl
                            << "Customer Name\t\t\t : " << cust_name << endl
                            << "Customer Age\t\t\t : " << cust_age << endl
                            << "Customer Telecom Brand Name\t : " << cust_telecome_brand_name << endl
                            << "Customer Mobile Number\t\t : " << cust_mobile_number << endl
                            << "Customer City\t\t\t : " << cust_city << endl
                            << "Customer Simcard Validity\t : " << cust_simcard_validity << endl;
            }
            
            static void header()
            {
                system("cls");
                cout << "C_id\tC_name\tC_age\tC_tel\tC_city\tC_sim\tC_mob\n======= ======= ======= ======= ======= ======= =======\n";
            }
            
            void getDataInTable()
            {
                cout << cust_id << t << cust_name << t << cust_age << t << cust_telecome_brand_name << t << cust_city << t << cust_simcard_validity << t << cust_mobile_number<< endl; 
            }
    };

    int main()
    {
        int n,i;
        
        cout << "Enter number of Customer : ";
        cin >> n;
        
        cust c[n];
        
        for(i=0 ; i<n ; i++)
        {
            c[i].setData(i+1,n);
        }
        
        cust::header();
        
        for(i=0 ; i<n ; i++)
        {
            c[i].getDataInTable();
        }
    }

><u>**Output**</u> :

<br>