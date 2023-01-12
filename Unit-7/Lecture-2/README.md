<h1><center>Unit-7 :- Polymorphism <center> </h1>

><u>**Aim**</u> : 1. WAP to perform all basic arithmetic operations such
like +, -, *, and / operations by implementing method
overloading using total 2 classes.
- use only one method named calculate() in child
class
- if you pass 2 arguments, perform division
- if you pass 3 arguments, perform subtraction
- if you pass 4 arguments, perform multiplication
- if you pass 5 arguments, perform addition

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    class B{
        private :
            int a;
        public  :
            void setData(char d){
                cout <<"Enter the "<< d <<" : ";
                cin  >>a;
            }
            void getData(){
                cout << "A : "<< a << endl;
            }
            bool operator < (B &c){
                if (this -> a < c.a){
                    return true;
                    }
                else{
                    return false;
                }
            }
    };
    int main(){

        B a,b;
        a.setData('A');
        b.setData('B');

        if(a < b){
            cout <<"B is Maximum number !!";
        }
        else{
            cout <<"A is Maximum number !!";
        }
    }

><u>**Output**</u> : 
    
![Screenshot_20230112_070539](https://user-images.githubusercontent.com/114163756/211955226-944405f3-d18f-4421-b5d1-b064ba38a712.png)

<br>
