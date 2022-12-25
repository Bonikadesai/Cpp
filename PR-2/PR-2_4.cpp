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
