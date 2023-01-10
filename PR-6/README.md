<center><h1>Project_6 : Multiprocessor</h1></center>

><u>**Aim**</u> : 1. WAP to create a Message class with a constructor that takes a single string with a default value. Create a private member string, and in the constructor simply assign the argument string to your internal string. Create two overloaded member functions called print( ): one that takes no arguments and simply prints the message stored in the object, and one that takes a string argument, which it prints in addition to the internal message.

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    class mesg{
        private:
            string a;
        public:
            void print()
            {
                cout << "Functions no argument..." << endl;
            }
            void print(string m)
            {
                cout << "String argument is function..." << endl;
            }
            mesg(string m)
            {
                cout << "Enter string value : "<< m << endl;
            }
    };

    int main()
    {
        mesg m("Welcome to Overloading topic in c++");
        m.print();
        m.print("Method Overloading...");
        
        return 0;
    }

><u>**Output**</u> :

<br>

><u>**Aim**</u> : 2. WAP to create a class that contains four member functions, with 0, 1, 2, and 3 int arguments, respectively. Create a main( ) that makes an object of your class and calls each of the member functions. Now modify the class so it has instead a single member function with all the arguments defaulted.

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    class member{
        public:
            void getData()
            {
                cout << "Hello World.." << endl;
            }
            void getData(int id)
            {
                cout << "Id\t : " << id << endl;
            }
            void getData(string name,string role)
            {
                cout << "Name\t : " << name << endl
                    << "Role\t : " << role << endl;
            }
            void getData(int age,double exp,string city)
            {
                cout << "Age\t : " << age << endl
                    << "Exp\t : " << exp << endl
                    << "City\t : " << city << endl;
            }
    };

    int main()
    {
        member m;
        
        m.getData();
        m.getData(1663);
        m.getData("Bonika","Fultter_Developer");
        m.getData(19,2,"Surat");
    }

><u>**Output**</u> :

<br>

><u>**Aim**</u> : 3. WAP which illustrate the use of Method Overriding concept.

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    class math{
        public:
            void mul(int a,int b)
            {
                cout << "Multiplication : " << a*b << endl;
            }
    };

    class math2:public math{
        public:
            void mul(int n,int m)
            {
                cout << "Multiplication of : " << n << " and " << m << " : " << n*m << endl;
            }
    };

    int main()
    {
        math2 m;
        
        m.mul(10,6);
        m.math::mul(15,34);
    }

><u>**Output**</u> :

<br>

><u>**Aim**</u> : 4. WAP for unary increment (++) and decrement (--) operator overloading.

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    class unary{
        private:
            int a;
        public:
            void setData()
            {
                cout << "Enter the number : ";
                cin >> a;
            }	
            void getData()
            {
                cout << "A : " << a << endl;
            }
        unary operator++(){
            unary tmp;
                tmp.a = ++a;
                return tmp;
        }	
        unary operator--(){
            unary tmp;
                tmp.a = --a;
                return tmp;
        }	
    };

    int main()
    {
        unary U1, U2,U3;
        U1.setData();
        
        cout << "Pre Increment : " << endl;
        U2 = ++U1;
        U1.getData();
        
        cout << "Pre Decrement : " << endl;
        U3 = --U2;
        U2.getData();
        return 0;
    }

><u>**Output**</u> :

<br>

><u>**Aim**</u> : 5. WAP to add two objects using binary plus (+) operator overloading.

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    class obj{
        private:
            int a;
        public:
            void setData()
            {
                cout << "Enter A : ";
                cin >> a;
            }	
            void getData()
            {
                cout << "A : " << a << endl;
            }
            obj operator+(obj o)
            {
                obj tmp;
                tmp.a = this->a + o.a;
                return tmp;
            }
    };

    int main()
    {
        obj o1,o2,o3;
        o1.setData();
        o2.setData();
        o3 = o1 + o2;
        o1.getData();
        o2.getData();
        o3.getData();
    }

><u>**Output**</u> :

<br>

><u>**Aim**</u> : 6. WAP to add two distances using binary plus (+) operator overloading.

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    class distance{
        private:
            int feet;
            int inch;
        public:
            void setData()
            {
                cout << "Enter Feet Value : ";
                cin >> feet;
                cout << "Enter Inch Value : ";
                cin >> inch; 
            }	
            void getData()
            {
                cout << endl << "Feet\t : " << feet << endl
                            << "Inch\t : " << inch << endl;
            }
            distance operator+(distance &dist1)
            {
                distance tmp;
                tmp.inch = inch + dist1.inch;
                tmp.feet = feet + dist1.feet + (tmp.inch/12);
                tmp.inch = tmp.inch%12;
                return tmp;
            }
    };

    int main()
    {
        distance d1,d2,d3;
        
        d1.setData();
        d2.setData();
        
        d3 = d1 + d2;
        
        d3.getData();
        
        return 0;
    }

><u>**Output**</u> :

<br>