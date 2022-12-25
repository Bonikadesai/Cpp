#include<iostream>
using namespace std;

inline int fact(int n)
{
	int f=1;
	tmp:
		
	if(n>=1)
	{
		f = f * n;
		n--;
		goto tmp;
	}
			
}

int main()
{
	int n;
	
	cout << "Entre the value : ";
	cin >> n;

	cout << "Fact : " << fact(n);
	return 0;
}
