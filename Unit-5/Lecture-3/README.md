<center><h1>Unit_5 : DATA ENCAPSULATION</h1></center>

><u>**Aim**</u> : 1. WAP to create a friend function for two different classes
which performs addition of two times in format of
HH:MM:SS.

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    class time2;
    class time1{
        private :
            int hour1,minute1,second1;
        public :
            void setData1()
            {
                cout<<"Enter hour1 : ";
                cin>>hour1;
                cout<<"Enter minute1 : ";
                cin>>minute1;
                cout<<"Enter second1 : ";
                cin>>second1;
                cout<<endl;
            }  
    friend void time3(time1,time2);
    };

    class time2{
        private :
            int hour2,minute2,second2;
        public :
            void setData2()
            {
                cout<<"Enter hour2 : ";
                cin>>hour2;
                cout<<"Enter minute2 : ";
                cin>>minute2;
                cout<<"Enter second2 : ";
                cin>>second2;
                cout<<endl;
            }
            friend void time3(time1,time2);
    };

    void time3(time1 t1,time2 t2)
    {
        cout<<"Time : " << t1.hour1 + t2.hour2 << " : " << t1.minute1 + t2.minute2 << " : " << t1.second1 + t2.second2;
    }

    int main()
    {
        time1 t1;
        time2 t2;
        
        t1.setData1();
        t2.setData2();
        time3(t1,t2);
    }

><u>**Output**</u> :

<br>