#include<iostream>
using namespace std;

class A{
	protected:
		int a;
		int b;
		int c;
};

class B : public A{
	public:	
		void setDatab()
		{
			cout << "Enter the value Class B of a : ";
			cin >> a;
			cout << "Enter the value Class B of b : ";
			cin >> b;
			
			c = a + b;
		}
};

class C : public A{
	public:	
		void setDatac()
		{
			cout << endl << "Enter the value Class C of a: ";
			cin >> a;
			cout << "Enter the value Class C of b: ";
			cin >> b;
			
			c = a + b;
		}
};

class D : public B, public C{
	public:
		void sum()
		{
			cout << endl << "Sum is Class B: " << B::c << endl;
			cout << "Sum is Class C: " << C::c << endl;
			B();
			C();
		}
};

int main()
{
	D d;
	
	d.B::setDatab();
	d.C::setDatac();
	d.sum();
}
