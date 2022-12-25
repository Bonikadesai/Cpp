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
