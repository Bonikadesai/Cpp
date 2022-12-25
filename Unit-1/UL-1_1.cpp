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
