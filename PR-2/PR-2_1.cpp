#include<iostream>
using namespace std;

int add(int a , int b)
{
	int sum=0;
	sum = a + b;
	return sum;
}

int average(int a , int b)
{
	int avg;
	avg = add(a,b) / 2;
	cout << "Average : " << avg << endl;
	return avg;
}

int main()
{
	int a,b,sum=0;
	
	cout << "Enter the value of A : ";
	cin >> a;
	cout << "Enter the value of B : ";
	cin >> b;
	
	cout << "Sum is : " << add(a,b) << endl;
	average(add(a,b),sum);

	
	return 0;
} 
