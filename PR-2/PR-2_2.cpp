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


