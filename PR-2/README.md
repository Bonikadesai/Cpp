<center><h1>Project_2 : Inliner</h1></center>

><u>**Aim**</u> : 1. WAP to pass function as an argument to a function.

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    int add(int a , int b)
    {
        int sum=0;
        sum = a + b;
        return sum;
    }

    int average(int a , int b)
    {
        int avg;
        avg = add(a,b) / 2;
        cout << "Average : " << avg << endl;
        return avg;
    }

    int main()
    {
        int a,b,sum=0;
        
        cout << "Enter the value of A : ";
        cin >> a;
        cout << "Enter the value of B : ";
        cin >> b;
        
        cout << "Sum is : " << add(a,b) << endl;
        average(add(a,b),sum);

        
        return 0;
    } 

><u>**Output**</u> : 

    ![Error Text](https://github.com/Bonikadesai/Cpp/blob/master/PR-2/Image/PR-2_1/Screenshot_20221225_044402.png)

    <br>

    ><u>**Aim**</u> : 2. WAP to swap elements of two integer arrays using user define function.

    ><u>**Program**</u> : 

        #include<iostream>
    using namespace std;

    int swap(int a[] , int n)
    {
        int i,b[n];
        
        for(i=0 ; i<n ; i++)
        {
            a[i] = a[i] + b[i];
            b[i] = a[i] - b[i];
            a[i] = a[i] - b[i];
        }
        
        cout << endl <<"Array to swap" <<endl;
        
        return 0;
    }
    int main()
    {
        int n,i;
        
        cout << "Enter the size of array : ";
        cin >> n;
        
        int a[n],b[n];
        
        for(i=0 ; i<n ; i++)
        {
            cout << "Enter a[" << i << " : ";
            cin >> a[i];
        }
        
        for(i=0 ; i<n ; i++)
        {
            cout << "Enter b[" << i << " : ";
            cin >> b[i];
        }
        
        for(i=0 ; i<n ; i++)
        {
            swap(a[i],b[i]);
        }
        
        for(i=0 ; i<n ; i++)
        {
            cout << "a[" << i << " : "<< a[i] << "  ";
            cout << "b[" << i << " : "<< b[i] << endl;
        }
        return 0;
     }

><u>**Output**</u> : 
![Error Text](https://github.com/Bonikadesai/Cpp/blob/master/PR-2/Image/PR-2_2/Screenshot_20221225_044832.png)

<br>

><u>**Aim**</u> : 3. WAP to find factorial using recursion.

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    int fact(int);

    int main()
    {
        int n;
        
        cout << "Enter the value : ";
        cin >> n;
        
        cout << "Factorial : " << fact(n) << endl;
        return 0;
    }

    int fact(int n)
    {
        if(n<=1)
        {
            return 1;
        }
        else
        {
            return n * fact(n-1);
        }
    }

><u>**Output**</u> : 

![Error Text](https://github.com/Bonikadesai/Cpp/blob/master/PR-2/Image/PR-2_3/Screenshot_20221225_044940.png)

<br>

><u>**Aim**</u> : 4. WAP to illustrate the use of inline function by creating a function which prints a multiplication table of given number.

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    int multi(int);

    int main()
    {
        int n,i;
        
        cout << "Enter the number : ";
        cin >> n;
        
        multi(n);
    }

    inline int multi(int n)
    {
        int i=1;
        
        tmp:
        cout << n <<" * " << i << " = " << n*i << endl;
        i++;
        
        if(i<=10)
        {
            goto tmp;
        }
    }

><u>**Output**</u> : 

![Error Text](https://github.com/Bonikadesai/Cpp/blob/master/PR-2/Image/PR-2_4/Screenshot_20221225_045106.png)

<br>

