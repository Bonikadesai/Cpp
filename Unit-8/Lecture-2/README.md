<h1><center>Unit-8 :- Data Abstraction <center> </h1>

><u>**Aim**</u> : 1. WAP to perform some basic mathematical operations
using Abstract class such like:
- area of circle
- area of triangle
- area of rectangle
- use one single pure virtual function named
calculate() to perform all above operations.

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    class geomatric{	
        protected:
            int r,b,h,l,w;
            double area;
            int type;
        public:
            
            virtual void calc(int i,char c,string s,double d)=0;
            
            virtual void setData()
            {
                cout << "Press 1 for Area of Circle.." << endl
                    << "Press 2 for Area of Triangle.." << endl
                    << "Press 3 for Area of Rectangle.." << endl;
            
            cout << "Enter the Your Choice : ";
            cin >> type;
            }	
    };

    class calculate : public geomatric{
        public:
            virtual void calc(int i,char c,string s,double d){
            }
                void swith(){
                    switch(type)
                    {
                    case 1:
                        cout << endl << endl << "\t\t\t\t----------Area Of Circle----------\t\t\t\t" << endl;
                        cout << endl << "Enter the Radius value : ";
                        cin >> r;
                            area = 3.14 * r *r;
                        cout << "Area of Circle : " << area << endl;
                    break;
                        
                    case 2:
                        cout << endl << endl << "\t\t\t\t----------Area Of Triangle----------\t\t\t\t" << endl;
                        cout << endl << "Enter the Base value : ";
                        cin >> b;
                        cout << "Enter the Height value : ";
                        cin >> h;
                            area = 0.5 * b * h;
                        cout << "Area Of Triangle : " << area << endl;
                    break;	
                        
                    case 3:
                        cout << endl << endl << "\t\t\t\t----------Area Of Rectangle----------\t\t\t\t" << endl;
                        cout << endl << "Enter the Length value : ";
                        cin >> l;
                        cout << "Enter the Width value : ";
                        cin >> w;
                            area = l * w;
                        cout << "Area of Rectangle : " << area << endl;	
                    break;		
                    }
                }
    };

    int main()
    {
        calculate c;

        c.setData();
        c.swith();		
    }
    
><u>**Output**</u> : 

<br>