#include<iostream>
using namespace std;

class A{
	public:
		int a = 15;
		virtual void setDataA()
		{
			cout << "This Class is A" << endl;
		}
};

class B : public A{
	public:
		int b = 15;
		virtual void setDataB()
		{
			cout << "This Class is B" << endl;
		}
};

class C : public A{
	public:
		int c = 15;
		virtual void setDataC()
		{
			cout << "This Class is C" << endl;
		}
};

class D : public B , public C{
	public:
		void setDataD()
		{
			cout << "This Class is D" << endl;
		}
};

int main()
{
	D d;
	d.setDataB();
	return 0;
}
