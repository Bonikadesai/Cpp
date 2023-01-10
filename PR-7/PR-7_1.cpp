#include<iostream>
using namespace std;

class A
{
	public:
		int i,n;
		int setDataA()
		{
			cout << "Enter the value : ";
			cin >> n;
		}
		
};

class B : virtual public A{
};

class C : virtual public A{
};

class D : public B ,public C
{
	public:
		int set()
		{
			A::setDataA();
			cout<<"Reverse : ";
			
			for(i=0;i<n;n=n/10)
			{
				cout<<n%10;
			}
		}
};
int main()
{
	D d;
	d.set();
}
