><u>**Aim**</u> : 1. WAP to find sum of all three number’s cubes by
implementing single level inheritance: Class X->Class Y
Class X has following members: a, b & c attributes in
integer data type
Class Y has following members: setData() and
getData() methods

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    class X{
        protected:
            int a;
            int b;
            int c;
        
    };

    class Y : protected X{
        public:
            void setData()
            {
                cout << "Enter a : ";
                cin >> a;
                cout << "Enter b : ";
                cin >> b;
                cout << "Enter c : ";
                cin >> c;
            }	
            
            void getData()
            {
                cout << endl << "Cube A : " << a*a*a << endl
                            << "Cube B : " << b*b*b << endl
                            << "Cube C : " << c*c*c << endl;
            }
    };

    int main()
    {
        Y y1,y2,y3;
        
        y1.setData();
        y2.setData();
        y3.setData();
        
        y1.getData();
        y2.getData();
        y3.getData();
    }

><u>**Output**</u> : 

![Error Text](https://github.com/Bonikadesai/Cpp/blob/master/Unit-6/Lecture-1/Image/UL-6_1/Screenshot_20221226_095342.png)

<br>

><u>**Aim**</u> : 2. WAP to convert given degree celsius temperature into
fahrenheit and convert that fahrenheit temperature
into kelvin by implementing multilevel inheritance:
Class P -> Class Q -> Class R
    (A) Class P has following members: temperature attribute in float
    (B)Class Q has following members: toFehrenheit() method
    (C)Class R has following members: toKelvin() method

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    class P{
        protected:
            double celsius;
            double fahrenheit;
            double kelvin;		
    };

    class Q : public P{
        public:
            void setDataF()
            {
                cout << "Enter Temperature of Celsius : ";
                cin >> celsius;
            }
            void fahern()
            {
                fahrenheit = (1.8 * celsius) + 32;
            }
            void getDataF()
            {
                cout << "Fahrenheit : " << fahrenheit << endl;
            }
    };

    class R : public Q{
        public:
            void setDataK()
            {
                cout << endl << "Enter Temperature of Celsius : ";
                cin >> celsius;
            }
            void kelv()
            {
                kelvin = celsius + 273.15;
            }
            void getDataK()
            {
                cout << "Kelvin : " << kelvin << endl;
            }
    };

    int main()
    {
        R r1;
        
        r1.setDataF();
        r1.fahern();
        r1.getDataF();
        
        r1.setDataK();
        r1.kelv();
        r1.getDataK();
    }

><u>**Output**</u> : 

![Error Text](https://github.com/Bonikadesai/Cpp/blob/master/Unit-6/Lecture-1/Image/UL-6_2/Screenshot_20221227_082107.png)

<br>