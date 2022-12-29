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