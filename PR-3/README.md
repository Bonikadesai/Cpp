<h1>Project_3 : The New Era</h1>

><u>**Aim**</u> : 1. WAP to create a class to read and add two distance. (e.g. 8 feet 16 inch + 4 feet 14 inch = 14 feet 6 inch)

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    class distans{
        private:
            int inch1;
            int feet1;
            int inch2;
            int feet2;
            int inch3;
            int feet3;
        public:
            void setData()
            {
                cout << "Enter Inch1 : ";
                cin >> inch1;
                cout << "Enter Feet1 : ";
                cin >> feet1;
                cout << "Enter Inch2 : ";
                cin >> inch2;
                cout << "Enter Feet2 : ";
                cin >> feet2;
            }	
            
            void inchFeet()
            {
                inch3 = inch1 + inch2;
                feet3 = feet1 + feet2;
                
                while(inch3>=12)
                {
                    inch3 = inch3 - 12;
                    feet3++;
                }
            }
            
            void getData()
            {
                cout << endl << "Inch1\t : " << inch1 << endl
                            << "Feet1\t : " << feet1 << endl
                            << "Inch2\t : " << inch2 << endl
                            << "Feet2\t : " << feet2 << endl
                    <<	endl << "Inch\t : " << inch3 << endl
                            << "Feet\t : " << feet3 << endl;
            }
    };

    int main()
    {
        distans d1,d2,d3;
        
        d1.setData();
        
        d1.inchFeet();
        
        d1.getData();
    }

><u>**Output**</u> : 

![Error Text](https://github.com/Bonikadesai/Cpp/blob/master/PR-3/Image/PR-3_1/Screenshot_20221225_035841.png)

<br>

><u>**Aim**</u> : 2. WAP to create a class to read and add two times.

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    class Time{
        private:
            int second1;
            int minute1;
            int hours1;
            int second2;
            int minute2;
            int hours2;
            int second3;
            int minute3;
            int hours3;
            
        public:
            void setData()
            {
                cout << "Enter second1 : ";
                cin >> second1;
                cout << "Enter Minute1 : ";
                cin >> minute1;
                cout << "Enter Hours1 : ";
                cin >> hours1;
                cout << "Enter second2 : ";
                cin >> second2;
                cout << "Enter Minute2 : ";
                cin >> minute2;
                cout << "Enter Hours2 : ";
                cin >> hours2;
            }	
            
            void smh()
            {
                second3 = second1 + second2;
                minute3 = minute1 + minute2;
                hours3  = hours1  + hours2;
                
                while(second3>=60)
                {
                    second3 = second3 - 60;
                    minute3++;
                    minute3 = minute3 - 60;
                    hours3++;
                }
            }
            
            void getData()
            {
                cout << endl << "Second1\t : " << second1 << endl
                            << "Minute1\t : " << minute1 << endl
                            << "Hours1\t  : " << hours1  << endl
                            << "Second2\t : " << second2 << endl
                            << "Minute2\t : " << minute2 << endl
                            << "Hours2\t  : " << hours2  << endl
                    <<	endl << "Second\t : " << second3 << endl
                            << "Minute\t : " << minute3 << endl
                            << "Hours\t  : " << hours3  << endl;
            }
    }; 

    int main()
    {
        Time t1;
        
        t1.setData();
        
        t1.smh();
        
        t1.getData();
    }

><u>**Output**</u> : 

![Error Text](https://github.com/Bonikadesai/Cpp/blob/master/PR-3/Image/PR-3_2/Screenshot_20221225_035718.png)

<br>

><u>**Aim**</u> : 3. WAP to create class to read time in seconds and convert into time in (HH:MM:SS) format.

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    class time{
        private:
            int sec;
            int min;
            int hours;
        public:
            void setData()
            {
                cout << "Entre Second\t : ";
                cin >> sec;
            }
            
            void second()
            {
                hours = sec / 3600;
                sec = sec % 3600;
                min = sec / 60;
                sec = sec % 60;
            }
            
            void getData()
            {
                cout << endl << " " << hours << " : " << min << " : " << sec << endl;
            }
    };

    int main()
    {
        time t1;
        
        t1.setData();
        
        t1.second();
        
        t1.getData();
    }

><u>**Output**</u> : 

![Error Text](https://github.com/Bonikadesai/Cpp/blob/master/PR-3/Image/PR-3_3/Screenshot_20221225_035955.png)

<br>

><u>**Aim**</u> : 4. WAP to create a class which Read and Print House details along with Room details.

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    class house{
        private:
            int h_no;
            int h_size;
            int h_bn;
            string h_color;
            string h_type;
        public:
            void setData()
            {
                cout << "Enter House Number : " ;
                cin >> h_no;
                cout << "Enter House Size : ";
                cin >> h_size;
                cout << "Enter House Bedroom No. : ";
                cin >> h_bn;
                cout << "Enter House Color : ";
                cin >> h_color;
                cout << "Enter House Type : ";
                cin >> h_type;
            }	
            
            void getData()
            {
                cout << endl << "House Number\t : " << h_no << endl
                            << "House Size\t : " << h_size << endl
                            << "House Room No.\t : " << h_bn << endl
                            << "House Color\t : " << h_color << endl
                            << "House Type\t : " << h_type << endl; 
            }
    };

    int main()
    {
        house h1;
        
        h1.setData();
        
        h1.getData();
    }

><u>**Output**</u> : 

![Error Text](https://github.com/Bonikadesai/Cpp/blob/master/PR-3/Image/PR-3_4/Screenshot_20221225_040129.png)

<br>

><u>**Aim**</u> : 5. WAP which illustrates the use of public and private access modifiers.

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    class student{
        private:
            int s_id;
            string s_name;
            int s_std;
        public:
            void setData()
            {
                cout << "Enter Student Id : ";
                cin >> s_id;
                cout << "Enter Student Name : ";
                cin >> s_name;
                cout << "Enter Student Standerd : ";
                cin >> s_std;
            }	
            
            void getData()
            {
                cout << endl << "ID\t : " << s_id << endl
                            << "Name\t : " << s_name << endl
                            << "Std\t : " << s_std << endl;
            }
    };

    int main()
    {
        student s1;
        
        s1.setData();
        
        s1.getData();
    }

><u>**Output**</u> : 

![Error Text](https://github.com/Bonikadesai/Cpp/blob/master/PR-3/Image/PR-3_5/Screenshot_20221225_040215.png)

<br>