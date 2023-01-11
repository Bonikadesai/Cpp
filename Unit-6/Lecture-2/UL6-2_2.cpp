#include<iostream>
using namespace std;

class A {
	protected:
		int a;
	public :
		void setDataA() 
		{
			cout << endl << "Enter A : ";
			cin >> a;
		}
};

class B : public A {
	protected :
		int b;
	public :
		void setDataB() 
		{
			cout << "Enter B : ";
			cin >> b;
		}
};

class C : public A {
	protected :
		int c;
	public :
		void setDataC() 
		{
			cout << "Enter C : ";
			cin >> c;
		}
};

class D : public B , public C {
	protected :
		int d;
	public :
		void setDataD() 
		{
			cout << "Enter D : ";
			cin >> d;
		}
		void getData() 
		{
			cout << endl << "Sum : " << B::a + b + c + d << endl << endl ;
		}
};
int main() {
D d1;
d1.B::setDataA();
d1.setDataB();
d1.setDataC();
d1.setDataD();
d1.getData();
}
