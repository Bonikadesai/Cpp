<h1><center>Unit-9 :- Exception Handling <center> </h1>

><u>**Aim**</u> : 1. WAP to implement exception handling mechanism for
different types of scenarios:
- a number cannot be divide by zero
- a person cannot be able to vote if his/her age is less
than 18
- a password cannot be validate if it doesn’t contains
an uppercase letter

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    class M{
        int a,b;
        string esc = "Cannot devide by ZERO";
        
        public :
            void setData(){
                cout << "Enter the value of A : ";
                cin  >> a;
                cout << "Enter the value of B : ";
                cin  >> b;
                
                if(b==0)
                {
                    throw esc;
                }
                else
                {
                    cout <<"Answer : " << a/b << endl;
                }
            }
    };
    int main(){
        M m;
        try {
            m.setData();
        }
        catch(string esc)
        {
            cout << esc;
        }
    }

><u>**Output**</u> : 

<br>