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
