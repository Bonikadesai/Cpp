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
		cout << "Cube is : " << b[i] << endl;
	}
}
