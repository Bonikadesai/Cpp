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
