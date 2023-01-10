<center><h1>Project_7 : Abstractor</h1></center>

><u>**Aim**</u> : 1) WAP to simulate reverse inheritance using virtual function.

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    class A
    {
        public:
            int i,n;
            int setDataA()
            {
                cout << "Enter the value : ";
                cin >> n;
            }
            
    };

    class B : virtual public A{
    };

    class C : virtual public A{
    };

    class D : public B ,public C
    {
        public:
            int set()
            {
                A::setDataA();
                cout<<"Reverse : ";
                
                for(i=0;i<n;n=n/10)
                {
                    cout<<n%10;
                }
            }
    };
    int main()
    {
        D d;
        d.set();
    }

><u>**Output**</u> :

<br>

><u>**Aim**</u> : 2) Create hybrid inheritance and remove ambiguity permanently.

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    class A{
        public:
            int a = 15;
            virtual void setDataA()
            {
                cout << "This Class is A" << endl;
            }
    };

    class B : public A{
        public:
            int b = 15;
            virtual void setDataB()
            {
                cout << "This Class is B" << endl;
            }
    };

    class C : public A{
        public:
            int c = 15;
            virtual void setDataC()
            {
                cout << "This Class is C" << endl;
            }
    };

    class D : public B , public C{
        public:
            void setDataD()
            {
                cout << "This Class is D" << endl;
            }
    };

    int main()
    {
        D d;
        d.setDataB();
        return 0;
    }

><u>**Output**</u> :