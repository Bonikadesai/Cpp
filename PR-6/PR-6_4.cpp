#include<iostream>
using namespace std;

class unary{
	private:
		int a;
	public:
		void setData()
		{
			cout << "Enter the number : ";
			cin >> a;
		}	
		void getData()
		{
			cout << "A : " << a << endl;
		}
	unary operator++(){
		unary tmp;
			tmp.a = ++a;
			return tmp;
	}	
	unary operator--(){
		unary tmp;
			tmp.a = --a;
			return tmp;
	}	
};

int main()
{
	unary U1, U2,U3;
	U1.setData();
	
	cout << "Pre Increment : " << endl;
	U2 = ++U1;
	U1.getData();
	
	cout << "Pre Decrement : " << endl;
	U3 = --U2;
	U2.getData();
	return 0;
}
