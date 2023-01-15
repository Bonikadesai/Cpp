><h1><center>Unit-1 :- Intro to C++ <center> </h1>

<b>=> Introduction to c++ :- </b>  
<br>
<b> - POP :-</b> Procedural oriented Programming => <b>C</b><br>
<b>- OOP :-</b> Object Oriented Programing => <b>C++ , Dart , Java</b><br>
    OOp is a Class & Object.
    <br>

<b> => History of C++ :- </b>
<br>
- C++ was developed by <b>Bjarne Stroustrup</b> at <b>Bell Laboratories</b> over a period starting in 1980.<br>
- Add Object Oriented features (Plus other improvements) to c, earlier it was called as <b>"C with Objects."</b> As the language developed. Stroustrup named it as c++ in 1984.<br>
- The name c++ Suggests <b>"C Incremented".</b> 
- 1980 by Bjarne Stroustrup at Bell Laboratories of AT & T(American Telephone & Telegraph),located in USA.<br>
<b>- 1980 :- C with Objects.<br> - 1984 :- C++</b>

<b>=> Differnet between C & C++ :- </b>  
<table border=2>
<tr>
    <th><b>Type</th>
    <th><b>C Language</b></th>
    <th><b>C++</b></th>
<tr>
<tr>
    <td>Extension</td>
    <td>.c</td>
    <td>.cpp</td>
</tr>
<tr>
    <td>Header File</td>
    <td>stdio.h</td>
    <td>iostream</td>
</tr>
<tr>
    <td>Return Type</td>
    <td>void</td>
    <td>int</td>
</tr>
<tr>
    <td>Output</td>
    <td>printf(function)</td>
    <td>cout(object)</td>
</tr>
<tr>
    <td>Input</td>
    <td>scanf(function)</td>
    <td>cin(object)</td>
</tr>
</table>

<b>- syntax of c++ print to Input or Output :-</b>
<br>
* <b>Input Syntax :-</b> 
    cin >> variableName;<br>
    (extraction operator : >>)<br>
* <b>Output Syntax :-</b> 
    cout << "Hello World";<br>
    (insertion operator : <<)

<b> => Basic Program Structure of C++ :- </b>

* Cout & cin class to attach using function :-<br>
<b>using namespace std;</b>

**Program** :-

    #include<iostream>
    using namespace std;

    int main()
    {
        cout << "Hello c++";
    }

**Output** :-

![Screenshot_20230112_111029](https://user-images.githubusercontent.com/114163756/212536256-ec1c35ad-5d39-4905-9dcf-0ff2565b2f74.png)

<br>

<b> => Manipulator Class (Input class Method) :- </b><br>
New line :- endl;


><h1><center>Unit-2 :- Expression & Function <center> </h1>

<b> => Special Assignment Operators :- </b><br>

- 3 types of operator
1. Chained expression.<br>
2. Embedded expression.<br>
3. Compound (Combined) assign expression.<br>

<b>1. Chained Expression :- </b>
        We can permit two-way comparisons to be chained with the usual pairwise.<br>
<b>Ex :- a = b = c = 15;</b>

<b>2. Embedded Expression :- </b>
        On the spot value assign perform.<br>
    - Value assign () breket in perform.     
<b>Ex :- a = b + (c = 10);</b>

<b>3. Compound (combined) assign Expression :- </b><br>
        Assignment Operator :- += , -= , *= , /= , %=<br>
<b>Ex :- int a = 10;<br>a += 5;</b>

<b> => Reference Variable :- </b><br>
* upgraded pointer
* Reference Variable must be intialized.
* Reference Variable before &(and) operator.

<b> => Function Prototyping(Pre declaration) :- </b>
Declare UDF above main function is called function prototyping.

    - declaration
    - defination
    - calling

<b> => Inline Keyword :- </b><br>
* It boosts performance speed by exchanging function's body while calling.
* When Function doesn't contains recurssion.
* When Function doesn't contains loop or switch case.

<b>Syntax :- inline void className(arguments)</b>

<br><br>

><h1><center>Unit-3 :- OOP Concept <center> </h1>

* <b>POP :- Procedurel Oriented Programing</b> => C Language<br>
* <b>OOP :- Object Oriented Programing </b> => Java , Python , Dart , php , Ketlin , Swift.

<table border=2>
<tr>
    <th><b>C Language</th>
    <th><b>C++</b></th>
    <th><b></b></th>
<tr>
<tr>
    <td>Variables</td>
    <td>data members</td>
    <td>attributes</td>
</tr>
<tr>
    <td>UDFs</td>
    <td>data member function</td>
    <td>methods</td>
</tr>
</table>

<b> => What is object oriented Programing ? </b><br>
* It is a concept in which code becomes well structuried well organized and increases it's reusability.
* Every Process will be done using object.
* The complete code will be dependent on object.
* all the logics must be written in class.

<b> => 4 Principle of OOP :- </b><br>

<b>1. Encapsulation :- To Combine</b>
- setter => Input
- getter => Output
- constructor , destructor
- static attributes & methods.

<b>2. Inheritence :- To share</b>
- Simple
- multilevel
- multiple
- hierarchical
- hybrid<br>
    -ambiguity

<b>3. Polymorphism :- To use in multiple way</b>
* Complie time<br>
    - method overloading
    - operator overloading
* Run time<br>
    - method overriding
    - virtual function

<b>4. Data Abstarction :- To Restrict</b>
* Access Modifier
    - public
    - private 
    - protected
* Abstarct class
    - pure virtual function

<b> => Class & Object :- </b><br>
* <b>class :-</b>Combination of data members and data member functions.<br>
 -> One type of Blueprint.

 <b>Syntax :- class className{<br>
            access_modifier:<br>
                - data members<br>
                - data member function<br>
                - constructor / destructor<br>
    };
    </b>

* <b>object :- (Variable)</b>
    - Instance of class
    - Reference of class

* <b>Access modifiers :- </b>
    - private(default)
    - public
    - protected

<br><br>

><h1><center>Unit-4 :- Github <center> </h1>

**gitHub Command :-**

* git init
* git remote add origin <b><u>repository link</u></b>
* git add (. / fileName / FolderName)
* git commit -m "Comment"
* git push -u origin master

<b> => gitHub in file Download command :- </b><br>
* git pull <b><u>repository link</u></b>

<b> => gitHub in Fatal Error :- </b><br>
* git config credential.email "xyz@gmail.com"
* git config credential.userName "User Name"
* git push -u origin master

<br><br>

><h1><center>Unit-5 :- Data Encapsulation <center> </h1>

<b> => What is Data Encapsulation ?</b><br>
-> Wrap every logic into the class... 

<b> => Setter & Getter :- </b><br>
* <b>Setter :-</b> A method to take input of all or specific attributes.
* <b>Getter :-</b> A method to give output of all or specific attributes.

<b> => this Keyword :- </b><br>
-> It defferenciates the class level variables , from function level variables.<br>
* <b>Syntax :- this-> classAttributesName = FunctoinmethodName;</b>

<b> => Nested member Function :- </b><br>
    -> Function in function to call is Nested Member Function.<br>
    <b>EX:- void setData(){<br>
        this-> getData();<br>
    }<br>
    void getData(){<br>
    }</b>

<b> => What is static member ? </b><br>
* common member for all objets which takes the single memory allocation.
* for all the objects , static member will common and only one.
* Which can be accessed by class name using scope resolution operator (::).
* <b><u>Scope Resolution Operator / Membership Label Operator</b></u>
    - static data member (Attributes).
    - static member function (Methods).

<b> => What is static member function ? </b><br>
* We can only use static data member in static function.Any other attributes won't be allowed.

<b> => What is Friend Function ? </b><br>
* It is mainely used to access private attributes of class.
* We have to declare friend function in class's body.
* It must be defined (Create body) in global area.

EX :

    class foodclass{
        public:
            // Only declaration in class
            friend void foo();
    };
    // Defination in global Area 

    void foo(){
        // body
    }

<b> => Types of Friend Function :- </b><br>
* default
* parameterized

<b> => Default Friend Function :- </b><br>

Ex : 

    class foodclass{
        public:
            void setData()
            {

            }
            friend void foo();
    };

    void foo(){
        foodclass fc;
        // body
    }

    int main()
    {
        foodclass fc;
        foo();
    }

<b> => Perametrized Friend Function :- </b><br>

Ex : 

    class foodclass{
        public:
            void setData()
            {

            }
            friend void foo();
    };

    void foo(foodclass fc){
        // body
    }

    int main()
    {
        foodclass fc;
        foo(fc);
    }

<b> => Implement Friend Function :- </b><br>
* class Prototyping => Pre-declaration of class.

Ex :

    class boni;
    class moni{
        //body
    };
    class boni{
        //body
    };

    //Perametrized Friend

    void bd (boni b,moni m)  
    {
        //body
    }

    int main()
    {
        moni m1;
        boni b1;
        bd(m1,b1);
    }
    
<b> => Call by value :- </b>
Changes limited to function.

<b> => Call by Refernce :- </b>Pointer / Reference<br>
    - Makes Changes in original value.

<b> => What is Constructor ? </b><br>
    - Constructor is a block of code , which is automatically invoked (run) .When class instantiated.<br>

<table border=2>

<tr>
    <td>Instance</td>
    <td>Object</td>
    <td>Noun</td>
</tr>
<tr>
    <td>Instantiate</td>
    <td>To create object</td>
    <td>Verb</td>
</tr>

</table>

<b> => Rules to create Constructor ? </b><br>
* It's name must be same as class's name.
* It must not have any return data type.
    - return data type (void , int , char)
* It must not return any value.

<b> => Types of Constructor :-  </b><br>
* Default
* Parameterized
* Copy
    - Implicit (directly)
    - Explicit (Forefully)

<b> => Default Constructor Example :- </b><br>

    class hotel{
        private:
            int id;
        public:
            void setData()
            {
                cout << "Enter hotel id : ";
                cin >> id;
            }
            void getData()
            {
                cout << "Id : " << id << endl;
            }

        // Default Constructor

        hotel()
        {
            cout << "Welcome the hotel.." << endl;
        }
    };

    int main()
    {
        hotel h;
    }

<b> => Parametrized Constructor Example :- </b><br>

    #include<iostream>
    using namespace std;

    class hotel{
        private:
            int id;
            string name;
        public:
            hotel(int id , string name)
            {
                this->id = id;
                this->name = name;
                
                cout << "Id\t : " << id << endl;
                cout << "Name\t : " << name << endl;
            }	
    };

    int main()
    {
        hotel h(101 , "John Deo");
    }

<b> => Copy Constructor Example :- </b><br>
* <b>Implicit (directly) Copy Constructor Example :-</b>

        #include<iostream>
        using namespace std;

        class hotel{
        private:
            int id;
            string name;
        public:
            
            // Implicit Copy Constructor

            hotel(int id , string name)
            {
                this->id = id;
                this->name = name;
                getData();
            }
            
            void getData()
            {
                cout << "Id\t : " << id << endl
                    << "H_name\t : " << name << endl;	
            }
        };

        int main()
        {
            hotel h1(1,"Navjivan");
            hotel h2(2,"Amiras");
            hotel h3(3,"Avadh");
            hotel h4 = h1;
            h4.getData();
            
        }

* <b>Explicit (forefully) Copy Constructor Example :-</b>

        #include<iostream>
        using namespace std;

        class hotel{
            private:
                int id;
                string name;
            public:
                
                hotel(int id , string name)
                {
                    this->id = id;
                    this->name = name;
                    getData();
                }
                
                // Explicit Copy constructor

                hotel(hotel &h)
                {
                    id = h.id;
                    name = h.name;
                    getData();	
                }
                void getData()
                {
                    cout << "Id\t : " << id << endl
                        << "H_name\t : " << name << endl;	
                }
        };

        int main()
        {
            hotel h1(1,"Navjivan");
            hotel h2(2,"Amiras");
            hotel h3(3,"Avadh");
            hotel h4 = h1;
            h4.getData();
            hotel h5(h2);
            
        }

<b> => What is Destructor ? </b><br>
    - A block of code which is automatically invoked when object is destroyed or deleted.

<b> => Rules to create Destructor :-  </b><br>
* It's name must be same as class's name starts with tild(~) Operator.
* It must not have any return data type.
    - return data type (void , int , char)
* It must not return any value.
* Destructor can't have any parameters.

Ex : 

    #include<iostream>
    using namespace std;

    class hotel{
        private:
            int id;
            string name;
            static int count;
        public:
            hotel()
            {
                id = count;
                cout << "Id\t : " << id << endl;
                count++;
            }
            
            ~hotel()
            {
                cout << "Id : " << id << " is deleted.." << endl;
            }	
    };

    int hotel::count=1;

    int main()
    {
        hotel h[10];
    }

><u>**Output**</u> : 

![Screenshot_20221225_105028](https://user-images.githubusercontent.com/114163756/212536292-0f17ee80-65f2-4d15-834b-69a2d24c7d0f.png)


<br><br>

><h1><center>Unit-6 :- Inheritance <center> </h1>

<b> => What is Inheritance ? </b><br>
* Share data among class.
* Share Attributes and methods from one class to another class.
<table border=2>

<tr>
    <td>Super Class</td>
    <td>Base class</td>
    <td>Parent class</td>
</tr>
<tr>
    <td>Sub class</td>
    <td>Derived class</td>
    <td>Child class</td>
</tr>

</table>

<b>Syntax :-</b><br>

    class parent{
        private:
            attrinutes;
        public:
            methods;
    };

    class child : access modifier(public) parent{
        // All the parent class's data is accessible here.
    };

    int main()
    {
        child c;
        c.parentData();
    }

<b> => Types of Inheritance :- </b><br>
* Single level Inheritance
* Multi level Inheritance
* Multiple Inheritance
* Hierarchical Inheritance
* Hybrid (Combination) Inheritance

<b> * Single level Inheritance :- </b><br>
- One parent class
- One child class
- Min class :- 2
- Max class :- 2

<b> * Multi level Inheritance :- </b><br>
- One parent class
- N child class
- Min class :- 3
- Max class :- N

<b> * Multiple Inheritance :- </b><br>
- Two parent class
- One child class
- Min class :- 3
- Max class :- N

<b> * Hierarchical Inheritance :- </b><br>
- One parent class
- Two child class
- Min class :- 3
- Max class :- N

<b> * Hybrid Inheritance :- </b><br>
- Min class :- 4
- Max class :- N
- Multiple + Hierarchical = Hybrid
- Ambigouce create is Two inheritance :- Multiple & Hybrid

<br><br>
 
><h1><center>Unit-7 :- Polymorphism <center> </h1>

- <b>Polymorphism :-</b> Polymorphism is a method were are use can create multiple formation or structure of single method.

* polymorphism is a combination of two greek words <b>"Poly = Multiple , Morphism :- Structure / Behaviour / Forms".</b>

<b> => Types of Polymorphism :- </b><br>

1. Run time :- 
    - Method Overiding
    - Virtual Function
2. Compile time :-
    - Method Overloading
    - Opertor Overloading

<b> * Method Overloading :- </b>When we create same method with multiple parameters in same class. It's called method overloading.

* <b>Rules :- </b><br>
    - class must be same.
    - Name must be same of all methods.
    - Parameters must be different of all methods.

<b> * Method Overiding :- </b>When we Recreate same method with derived class parameters same. It's called method overiding.

* <b>Rules :- </b><br>
    - class must be derived (child).
    - Name must be same of all methods.
    - Parameters must be same of all methods.

<b> => Main Different method overloading & Method Overiding :- </b><br>

<table border=2>

<tr>
    <th></th>
    <th>Class</th>
    <th>Name</th>
    <th>Parameters</th>
</tr>
<tr>
    <td>Method Overloading</td>
    <td>Same</td>
    <td>Same</td>
    <td>Different</td>
</tr>

<tr>
    <td>Method Overiding</td>
    <td>Derived</td>
    <td>Same</td>
    <td>Same</td>
</tr>

</table>

<b> * Operator Overloading :- </b>When we create same method with multiple parameters in same class. It's called method overloading.
