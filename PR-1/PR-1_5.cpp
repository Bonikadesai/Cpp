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
