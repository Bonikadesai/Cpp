<center><h1>Unit_2 : Expression & Function</h1></center>

><u>**Aim**</u> : 1. WAP to find factorial of all elements from given array
using inline function.

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    inline int fact(int n)
    {
        int f=1;
        tmp:
            
        if(n>=1)
        {
            f = f * n;
            n--;
            goto tmp;
        }
                
    }

    int main()
    {
        int n;
        
        cout << "Entre the value : ";
        cin >> n;

        cout << "Fact : " << fact(n);
        return 0;
    }

><u>**Output**</u> :

<br>

><u>**Aim**</u> : 2. WAP to create a basic calculator with +, -, *, /and %
operations using switch case and UDF. Add never
ending functionality using loop.

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    void addition(int a,int b)
    {
        cout << "Addition = " << a+b << endl;
    }
    
    void substraction(int a,int b)
    {
        cout << "Substraction = " << a-b << endl;
    }
    
    void multiplication(int a,int b)
    {
        cout << "Multiplication = " << a*b << endl;
    }
    
    void divison(int a,int b)
    {
        cout << "Divison = " << a/b << endl;
    }
    
    void moduls(int a,int b)
    {
        cout << "Moduls = " << a%b << endl;
    }
    
    int main()
    {
        int m,n,i,type;
        char choice;
        do
        {
        cout << "Press + for Addition.." << endl;
        cout << "Press - for Substration.." << endl;
        cout << "Press * for Multiplication.." << endl;
        cout << "Press / for Divison.." << endl;
        cout << "Press %% for Modul.." << endl;
        cout << "Press 6 for exit.." << endl;
        fflush(stdin);
        cout <<"Enter the operator: ";
        cin >> choice;   
            
        
        switch(choice)		
        {
            case '+':
                cout << "Enter the value of A: ";
                cin >> m;
                cout << "Enter the value of B: ";
                cin >> n;
                addition(m,n);
                break;
                
            case '-':
                cout << "Enter the value of A: ";
                cin >> m;
                cout << "Enter the value of B: ";
                cin >> n;
                substraction(m,n);
                break;
                
            case '*':
                cout << "Enter the value of A: ";
                cin >> m;
                cout << "Enter the value of B: ";
                cin >> n;
                multiplication(m,n);
                break;
                
            case '/':
                cout << "Enter the value of A: ";
                cin >> m;
                cout << "Enter the value of B: ";
                cin >> n;
                divison(m,n);
                break;
                
            case '%' :
            cout << "Enter the value of A: ";
                cin >> m;
                cout << "Enter the value of B: ";
                cin >> n;
                moduls(m,n);
                break;
                
            case '6':
            cout << "Exit";
            break;
                        
            default :
                cout << "Invalid value:";
                break;
            
            }
            
        }while(choice!='6');
        
    }                              
><u>**Output**</u> :

<br>
