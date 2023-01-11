<center><h1>Unit_1 : Intro to C++</h1></center>

><u>**Aim**</u> : 1. WAP to find all even elements from given 1D array.

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    int main()
    {
        int n,i;
        
        cout <<"Enter the array size : ";
        cin >> n;
        
        int a[n];
        
        for(i=0 ; i<n ; i++)
        {
            cout << "Enter a : " ;
            cin >> a[i];
        }
        
        for(i=0 ; i<n ; i++)
        {
            if(a[i] % 2 == 0)
            {
                cout << "Even a : " << a[i] << endl;
            }
        }
        return 0;
    }

><u>**Output**</u> :

<br>

><u>**Aim**</u> : 2. WAP to convert given string into toggle case.

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

<br>

><u>**Aim**</u> : 3. WAP to find all leap years from 2020 to 3030 and store
them into an array.

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    int main()
    {
        int n[1000],count=0,i;
        
        for(i=2020 ; i<=3030 ; i++)
        {
            if(i % 4 == 0)
            {
                n[count]=i;
                count++;
            }
        }
        
        for(i=0 ; i<count ; i++)
        {
            cout << "Leap year : ";
            cout << n[i] << endl;
        }	
    }

><u>**Output**</u> :

<br>