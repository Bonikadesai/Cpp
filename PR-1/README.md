<center><h1>Project_1 : Fundamental Booster</h1></center>

><u>**Aim**</u> : 1. WAP to check given string is numeric or not.

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    int main()
    {
        char str[100];
        int i,d=0;
        
        cout << "Enter the string : ";
        cin >> str;
        
        for(i=0 ; str[i]!='\0' ; i++)
        {
            if(str[i]>='0' && str[i]<='9')
            {
                d++;
            }
        }
        if(d!=0)
        {
            cout << "String is Numeric.." << endl;
        }
        else
        {
            cout << "String not numeric.." << endl;
        }
        
        cout << "String : " << str;
        return 0;
    }

><u>**Output**</u> : 

![Error Text](https://github.com/Bonikadesai/Cpp/blob/master/PR-1/Image/PR-1_1/Screenshot_20221225_051610.png)

<br>

><u>**Aim**</u> : 2. WAP to find leap years from 2000 to 3000.

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    int main()
    {
        int i;
        
        for(i=2000 ; i<=3000 ; i++)
        {
            if(i % 4 == 0)
            {
                cout << "Leap year : " << i << endl;
            }
        }
        return 0;
    }

><u>**Output**</u> : 

![Error Text](https://github.com/Bonikadesai/Cpp/blob/master/PR-1/Image/PR-1_2/Screenshot_20221225_051812.png)

<br>

><u>**Aim**</u> : 3. WAP to convert given string into toggle case.

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    int main()
    {
        char str[100];
        int i;
        
        cout << "Enter Charcter : ";
        cin >> str;
        
        for(i=0 ; str[i]!='\0'; i++)
        {
            if(str[i]>=65 && str[i]<=90)
            {
                str[i] += 32;
            }
            else if(str[i]>=97 && str[i]<=122)
            {
                str[i] -= 32;
            }
        }
        
        cout << "Toggle case : " << str;
        return 0;
    }

><u>**Output**</u> : 

![Error Text](https://github.com/Bonikadesai/Cpp/blob/master/PR-1/Image/PR-1_3/Screenshot_20221225_052014.png)

<br>

><u>**Aim**</u> : 4. WAP to check if a given character is vowel or consonant.

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    int main()
    {
        char n;
        
        cout << "Enter the charcter : ";
        cin >> n;
        
        if(n=='A' || n=='E' || n=='I' || n=='O' || n=='U' || n=='a' || n=='e' || n=='i' || n=='o' || n=='u')
        {
            cout << "Vowel Charcter..";
        }
        else
        {
            cout << "Constant Charcter..";
        }
        return 0;
    }

><u>**Output**</u> : 

![Error Text](https://github.com/Bonikadesai/Cpp/blob/master/PR-1/Image/PR-1_4/Screenshot_20221225_052106.png)

<br>

><u>**Aim**</u> : 5. WAP to find square root of given numbers from array elements.

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    int main()
    {
        int i,n,j;
        
        cout << "Enter the array size : ";
        cin >> n;
        
        int a[n],b[n];
        
        for(i=0 ; i<n ; i++)
        {
            cout << "Enter a : ";
            cin >> a[i];
        }
        
        for(i=0 ; i<n ; i++)
        {
            for(j=0 ; j<a[i] ; j++)
            {
                if(j * j == a[i])
                {
                    b[i] = j;
                    break;
                }
                else
                {
                    b[i] = 0;
                }
            }
        }
        
        for(i=0 ; i<n ; i++)
        {
            cout << "Square root : " << b[i] << endl;
        }
        return 0;
    }

><u>**Output**</u> : 

![Error Text](https://github.com/Bonikadesai/Cpp/blob/master/PR-1/Image/PR-1_5/Screenshot_20221225_052234.png)

<br>

><u>**Aim**</u> : 6. WAP to generate cube of given 5 numbers and make an array of that generated cubes.

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    int main()
    {
        int i,n;
        
        cout << "Enter the size of array : ";
        cin >> n;
        
        int a[n],b[n];
        
        for(i=0 ; i<n ; i++)
        {
            cout << "Enter a : ";
            cin >> a[i];
        }
        
        for(i=0 ; i<n ; i++)
        {
            b[i] = a[i] * a[i] * a[i];
        }
        
        for(i=0 ; i<n ; i++)
        {
            cout << endl << "Cube is : " << b[i] << endl;
        }
    }

><u>**Output**</u> : 

![Error Text](https://github.com/Bonikadesai/Cpp/blob/master/PR-1/Image/PR-1_6/Screenshot_20221225_052343.png)

<br>