<h1><center>Unit-6 :- Inheritance <center> </h1>

><u>**Aim**</u> : 1. WAP to print rate of interests of different banks using
hierarchical inheritance:
- Class RBI -> Class SBI
- Class RBI -> Class BOB
- Class RBI -> Class ICICI
- inherit rate attribute and getROI() method in all child
classes

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    class RBI{
        protected:
            double NIC;
            double COI;
        public:
            void setROI()
            {
                cout << "Enter Net Income : ";
                cin >> NIC;
                cout << "Enter Cost of investment : ";
                cin >> COI;	
            }
            
    };

    class SBI : public RBI{
            double ROI=5;
        public :
            void getROI(){
                ROI = (NIC / COI) * 100;
                cout << endl << "SBI Return on Investment : " << ROI << endl;
            }
    };

    class BOB : public RBI{
            double ROI=10;
        public :
            void getROI(){
                ROI = (NIC / COI) * 100;
                cout << endl << "BOB Return on Investment : " << ROI << endl;
            }
    };

    class ICICI : public RBI{
            double ROI=7;
        public :
            void getROI(){
                ROI = (NIC / COI) * 100;
                cout << endl << "ICICI Return on Investment : " << ROI << endl;
            }
    };

    int main()
    {
        SBI s;
        BOB b;
        ICICI i;
        
        s.setROI();
        s.getROI();
        
        b.setROI();
        b.getROI();
        
        i.setROI();
        i.getROI();
    }

><u>**Output**</u> : 

<br>

><u>**Aim**</u> : 2. WAP to perform four different number’s sum by
inheriting constructors in hybrid inheritance.

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    class A{
        protected:
            int a;
            int b;
            int c;
    };

    class B : public A{
        public:	
            void setDatab()
            {
                cout << "Enter the value Class B of a : ";
                cin >> a;
                cout << "Enter the value Class B of b : ";
                cin >> b;
                
                c = a + b;
            }
    };

    class C : public A{
        public:	
            void setDatac()
            {
                cout << endl << "Enter the value Class C of a: ";
                cin >> a;
                cout << "Enter the value Class C of b: ";
                cin >> b;
                
                c = a + b;
            }
    };

    class D : public B, public C{
        public:
            void sum()
            {
                cout << endl << "Sum is Class B: " << B::c << endl;
                cout << "Sum is Class C: " << C::c << endl;
                B();
                C();
            }
    };

    int main()
    {
        D d;
        
        d.B::setDatab();
        d.C::setDatac();
        d.sum();
    }

><u>**Output**</u> : 

<br>