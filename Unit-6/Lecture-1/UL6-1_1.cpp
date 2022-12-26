#include<iostream>
using namespace std;

class X{
	protected:
		int a;
		int b;
		int c;
	
};

class Y : protected X{
	public:
		void setData()
		{
			cout << "Enter a : ";
			cin >> a;
			cout << "Enter b : ";
			cin >> b;
			cout << "Enter c : ";
			cin >> c;
		}	
		
		void getData()
		{
			cout << endl << "Cube A : " << a*a*a << endl
						 << "Cube B : " << b*b*b << endl
						 << "Cube C : " << c*c*c << endl;
		}
};

int main()
{
	Y y1,y2,y3;
	
	y1.setData();
	y2.setData();
	y3.setData();
	
	y1.getData();
	y2.getData();
	y3.getData();
}
