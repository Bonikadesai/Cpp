#include<iostream>
using namespace std;

class math{
	public:
		void mul(int a,int b)
		{
			cout << "Multiplication : " << a*b << endl;
		}
};

class math2:public math{
	public:
		void mul(int n,int m)
		{
			cout << "Multiplication of : " << n << " and " << m << " : " << n*m << endl;
		}
};

int main()
{
	math2 m;
	
	m.mul(10,6);
	m.math::mul(15,34);
}
