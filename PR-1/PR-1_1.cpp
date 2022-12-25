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
