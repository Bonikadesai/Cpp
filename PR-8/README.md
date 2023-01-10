<center><h1>Project_8 : Terminator</h1></center>

><u>**Aim**</u> : 1. Write a "Garage" class that has a "Car" that is having troubles with its "Motor". Use a function-level try block in the "Garage" class constructor to catch an exception (thrown from the "Motor" class) when its "Car" object is initialized. Throw a different exception from the body of the "Garage" constructor s handler and catch it in main( ).

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    class Motor{
        protected :
            int n;
            string esc = "Your car is not ready!!";
        public :
            void setdata(){
                cout << "Enter the car code 0 or N value : ";
                cin  >> n;
                
                if(n==0)
                {
                    throw esc;
                }
                else
                {
                    cout <<"Your car is Completly ready..";
                }
            }
    };
    class Garage : public Motor{
        public :
            Garage(){
                try{
                    setdata();
                }
                catch(string esc){
                    cout << esc;
                }
            }
    };
    class Car {
        public :
            Car(){
                Garage g;
            }
    };
    int main(){
        Car C;	
    }

><u>**Output**</u> :

<br>

><u>**Aim**</u> : 2. WAP to create a class which illustrate the concept of handling all types of exceptions using general exception.

><u>**Program**</u> : 

    #include<iostream>
    #include<string.h>
    using namespace std;

    class A{
        protected:
            int a;
            int b;
            string esc = "Cannot Devide by ZERO";
        public:
            
            void setData()
            {
                
                cout << "Enter A : ";
                cin >> a;
                cout << "Enter B : ";
                cin >> b;
                
                try{
                    if(b==0)
                    {
                        throw esc;
                    }
                    else
                    {
                        cout << "Answer : " << a/b << endl;
                    }
                }
                catch(char c)
                {
                    cout << "Base value cannot be charcter.." << endl; 
                }
                catch(double d)
                {
                    cout << "Enter Only Integer Value.." << endl;
                }
                catch(...)
                {
                    cout << "General Exception Block.." << endl;
                }
            }
    };

    int main()
    {
        A a;
        a.setData();
    }
    
><u>**Output**</u> :

<br>
