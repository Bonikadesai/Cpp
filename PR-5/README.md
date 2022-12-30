<center><h1>Project_5 : Heritage</h1></center>

><u>**Aim**</u> : 1. WAP that defines a shape class with a constructor that gives value to width and height. The define two sub-classes triangle and rectangle, that calculate the area of the shape area (). In the main, define two variables a triangle and a rectangle and then call the area() function in this two varibles.

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    class shape{
        public:
            double width,height;
            shape()
            {
                cout << "Enter Width : ";
                cin >> width;
                cout << "Enter Height : ";
                cin >> height;	
            }
    };

    class rectangle : public shape{
        public:
            void area()
            {
                cout << "Area of Ractangle is : " << width*height << endl;
            }
    };

    class triangle : public shape{
        public:
            void area()
            {
                cout << "Area of Triangle is : " << 0.5*width*height << endl;
            }
    };

    int main(){
        rectangle R1;
        R1.area();
        
        triangle T1;
        T1.area();
    }

><u>**Output**</u> : 

![Error Text](https://github.com/Bonikadesai/Cpp/blob/master/PR-5/Image/PR-5_1/Screenshot_20221229_080722.png)

<br>

><u>**Aim**</u> : 2. WAP with a mother class and an inherited daugther class.Both of them should have a method void display ()that prints a message (different for mother and daugther). In the main define a daughter and call the display() method on it.

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    class mother{
        public:
            string name;
            int age;
            
            void setDataM()
            {
                cout << "Enter Mother Name : ";
                cin >> name;
                
                cout << "Enter Mother Age : ";
                cin >> age;
            }
            
            void getDataM()
            {
                cout << "Mother Name\t : " << name << endl
                    << "Mother Age\t : " << age << endl;
            }
    };

    class daughter : public mother{
        public:
            string name;
            int age;
            
            void setDataD()
            {
                cout << "Enter Daughter Name : ";
                cin >> name;
                
                cout << "Enter Daughter Age : ";
                cin >> age;
            }
            
            void getDataD()
            {
                cout << "Daughter Name\t : " << name << endl
                    << "Daughter Age\t : " << age << endl;
            }
    }; 

    int main(){
        daughter d1;
        
        d1.setDataM();
        d1.setDataD();
        
        d1.getDataM();
        d1.getDataD();
    }

><u>**Output**</u> : 

![Error Text](https://github.com/Bonikadesai/Cpp/blob/master/PR-5/Image/PR-5_2/Screenshot_20221229_081405.png)

<br>

><u>**Aim**</u> : 3. WAP with a mother class animal. Inside it define a name and an age variables, and set_value() function. Then create two bases variables Zebra and Dolphin which write a message telling the age, the name and giving some extra information (e.g. place of origin).

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    class animal{
        protected:
            int age;
            string name;
        public:
            void setData()
            {
                cout << "Enter the Age : ";
                cin >> age;
                cout << "Enter the Name : ";
                cin >> name;
            }		
    };

    class zebra : public animal{
        public:
            void getDataZ(){
                cout << endl << "Zebra Age\t : " << age << endl
                            << "Dolphin Name\t : " << name << endl;
            }
    };

    class dolphin : public animal{
        public:
            void getDataD(){
                cout << endl << "Dolphin Age\t : " << age << endl
                            << "Dolphin Name\t : " << name << endl;
            }
    };

    int main(){
        zebra z;
        dolphin d;
        
        z.setData();
        d.setData();
        
        z.getDataZ();
        d.getDataD();
    }

><u>**Output**</u> : 

![Error Text](https://github.com/Bonikadesai/Cpp/blob/master/PR-5/Image/PR-5_3/Screenshot_20221229_081532.png)

<br>

><u>**Aim**</u> : 4. WAP to read and print employee information using multiple inheritance.

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    class employee1{
        private:
            int e_id;
            string e_name;
            string e_role;
        public:
            void setData1(){
                cout << "Enter Employee Id : ";
                cin >> e_id;
                cout << "Enter Employee Name : ";
                cin >> e_name;
                cout << "Enter Employee Role : ";
                cin >> e_role;
            }	
            void getData1()
            {
                cout << endl << "Employee id\t : " << e_id << endl
                            << "Employee Name\t : " << e_name << endl
                            << "Employee Role\t : " << e_role << endl; 
            }
    };

    class employee2{
        private:
            int e_age;
            int e_salary;
            double e_exp;
        public:
            void setData2(){
                cout << "Enter Employee Age : ";
                cin >> e_age;
                cout << "Enter Employee Salary : ";
                cin >> e_salary;
                cout << "Enter Employee Experience : ";
                cin >> e_exp;
            }	
            void getData2()
            {
                cout << endl << "Employee Age\t : " << e_age << endl
                            << "Employee Salary\t : " << e_salary << endl
                            << "Employee Exp\t : " << e_exp << endl; 
            }
    };

    class employee3 : public employee1 , public employee2{
        private:
            string compny_name;
        public:
            void setData3(){
                cout << "Enter Company Name : ";
                cin >> compny_name;
            }
            void getData3(){
                cout << endl << "Company Name\t : " << compny_name << endl;
            }	
    };

    int main()
    {
        employee3 e;
        
        e.setData1();
        e.setData2();
        e.setData3();
        
        e.getData1();
        e.getData2();
        e.getData3();
    }

><u>**Output**</u> : 

![Error Text](https://github.com/Bonikadesai/Cpp/blob/master/PR-5/Image/PR-5_4/Screenshot_20221230_073438.png)

<br>

><u>**Aim**</u> : 3. WAP with a mother class animal. Inside it define a name and an age variables, and set_value() function. Then create two bases variables Zebra and Dolphin which write a message telling the age, the name and giving some extra information (e.g. place of origin).

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    class animal{
        protected:
            int age;
            string name;
        public:
            void setData()
            {
                cout << "Enter the Age : ";
                cin >> age;
                cout << "Enter the Name : ";
                cin >> name;
            }		
    };

    class zebra : public animal{
        public:
            void getDataZ(){
                cout << endl << "Zebra Age\t : " << age << endl
                            << "Dolphin Name\t : " << name << endl;
            }
    };

    class dolphin : public animal{
        public:
            void getDataD(){
                cout << endl << "Dolphin Age\t : " << age << endl
                            << "Dolphin Name\t : " << name << endl;
            }
    };

    int main(){
        zebra z;
        dolphin d;
        
        z.setData();
        d.setData();
        
        z.getDataZ();
        d.getDataD();
    }

><u>**Output**</u> : 

![Error Text](https://github.com/Bonikadesai/Cpp/blob/master/PR-5/Image/PR-5_3/Screenshot_20221229_081532.png)

<br>

><u>**Aim**</u> : 5. WAP to demonstrate example of hierarchical inheritance to get square and cube of a number.

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    class number{
        protected:
            int a;
        public:
            void setData(){
                cout << "Enter the value : ";
                cin >> a;
            }	
    };

    class square : public number{
            int b;
        public:
            void getsquare(){
                b = a * a;
                cout << "Square is : " << b << endl;
            }
    };

    class cube : public number{
            int c;
        public:
            void getcube(){
                c = a * a * a;
                cout << "Cube is : " << c << endl;
            }
    };

    int main()
    {
        square s;
        cube c;

        s.setData();
        s.getsquare();
        
        c.setData();
        c.getcube();	
    }

><u>**Output**</u> : 

![Error Text](https://github.com/Bonikadesai/Cpp/blob/master/PR-5/Image/PR-5_5/Screenshot_20221230_073700.png)

<br>

><u>**Aim**</u> : 6. WAP to read and print employee information with use of multilevel inheritance. (as like in below image)

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    class EmployeeA{
        protected:
            int id;
            string name;
            string role;
            int salary;
            double exp;
            string comp_name;
            string address;
            string email;
            long long int contect;
        public:
            void setDataA(){
                cout << "Enter Employee Id : ";
                cin >> id;
                cout << "Enter Employee Name : ";
                cin >> name;
                cout << "Enter Employee Role : ";
                cin >> role;
            }	
    };

    class EmployeeB : public EmployeeA{
        public:
            void setDataB(){
                //salary,experience
                cout << "Enter Employee Salary : ";
                cin >> salary;
                cout << "Enter Employee Experience : ";
                cin >> exp;
            }
    };

    class EmployeeC : public EmployeeA , public EmployeeB{
        public:
            void setDataC(){
                //comp_name,address
                cout << "Enter Comapny Name : ";
                cin >> comp_name;
                cout << "Enter Employee Address : ";
                cin >> address;
            }
            void getDataC(){
                //name,role,salary
                cout << endl << "Employee Name\t : " << name << endl
                            << "Employee Role\t : " << role << endl
                            << "Employee Salary\t : " << salary << endl;
            }
    };

    class EmployeeD : public EmployeeA , public EmployeeB , public EmployeeC{
        public:
            void setDataD(){
                //emil,contect
                cout << "Enter Employee Email : ";
                cin >> emil;
                cout << "Enter Employee Contect : ";
                cin >> contect;
            }
            void getDataD(){
                //Id,name,role,salary,expreince,comp_name,address,email,contect
                cout << endl << "Employee Id\t : " << id << endl
                            << "Employee Name\t : " << name << endl
                            << "Employee Role\t : " << role << endl
                            << "Employee Salary\t : " << salary << endl
                            << "Employee Exp\t : " << exp << endl
                            << "Company Name\t : " << comp_name << endl
                            << "Employee Address\t : " << address << endl
                            << "Employee Email\t : " << email << endl
                            << "Employee Contect\t : " << contect << endl;
                EmployeeA();
                EmployeeB();
                EmployeeC();			 
            }
    };

    int main()
    {
        EmployeeD e;
        
        e.setDataA();
        e.EmployeeB::setDataB();
        e.EmployeeC::setDataC();
        e.EmployeeD::setDataD();
        
        e.getDataD();
    }

><u>**Output**</u> : 

![Error Text]()

<br>