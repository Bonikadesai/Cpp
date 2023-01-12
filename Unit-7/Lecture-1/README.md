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

    class Arith{
        public:
            void sum(int a,int b)
            {
                cout << "Divison : " << a/b << endl;
            }
            void sum(int a,int b,int c)
            {
                cout << "Substrction : " << a-b-c << endl;
            }
            void sum(int a,int b,int c,int d)
            {
                cout << "Multiplication : " << a*b*c*d << endl;
            }
            void sum(int a, int b, int c, int d, int e)
            { 
                cout << "Addition : " << a+b+c+d+e << endl;
            }
    };

    int main()
    {
        Arith a;
        
        a.sum(10,5);
        a.sum(20,10,5);
        a.sum(1,2,3,4);
        a.sum(10,20,30,40,50);
    }

><u>**Output**</u> : 

<br>

><u>**Aim**</u> : 2. WAP to implement method overriding by following
below mentioned criteria:
- Class Cricket -> Class T20Match
- Class Cricket -> Class TestMatch
- override getTotalOvers() method in both classes

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    class Cricket{
        protected:
            int Over;
    };

    class T20match : public Cricket{
        public:
            void getOver()
            {
                cout << "In this Match you will Get 20 Overs..\n";
            }
    };

    class Testmatch : public T20match{
        public:
            void getOver()
            {
                cout << "In this Match you will Get 90 Overs..\n";
            }
    };

    int main(){
        Testmatch t;
        
        t.T20match::getOver();
        t.Testmatch::getOver();
    }

><u>**Output**</u> : 

<br>