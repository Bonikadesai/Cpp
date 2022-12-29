<center><h1>Project_5 : Heritage</h1></center>

><u>**Aim**</u> : 1. WAP that defines a shape class with a constructor that gives value to width and height. The define two sub-classes triangle and rectangle, that calculate the area of the shape area (). In the main, define two variables a triangle and a rectangle and then call the area() function in this two varibles.


><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    class shape{
        public:
            double width,height;
            shape()
            {
                cout << "Enter Width : ";
                cin >> width;
                cout << "Enter Height : ";
                cin >> height;	
            }
    };

    class rectangle : public shape{
        public:
            void area()
            {
                cout << "Area of Ractangle is : " << width*height << endl;
            }
    };

    class triangle : public shape{
        public:
            void area()
            {
                cout << "Area of Triangle is : " << 0.5*width*height << endl;
            }
    };

    int main(){
        rectangle R1;
        R1.area();
        
        triangle T1;
        T1.area();
    }

><u>**Output**</u> : 


<br>