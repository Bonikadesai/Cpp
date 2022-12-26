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