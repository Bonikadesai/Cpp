#include<iostream>
using namespace std;

class P{
	protected:
		double celsius;
		double fahrenheit;
		double kelvin;		
};

class Q : public P{
	public:
		void setDataF()
		{
			cout << "Enter Temperature of Celsius : ";
			cin >> celsius;
		}
		void fahern()
		{
			fahrenheit = (1.8 * celsius) + 32;
		}
		void getDataF()
		{
			cout << "Fahrenheit : " << fahrenheit << endl;
		}
};

class R : public Q{
	public:
		void setDataK()
		{
			cout << "Enter Temperature of Celsius : ";
			cin >> celsius;
		}
		void kelv()
		{
			kelvin = celsius + 273;
		}
		void getDataK()
		{
			cout << "Kelvin : " << kelvin << endl;
		}
};

int main()
{
	R r1;
	
	r1.setDataF();
	r1.fahern();
	r1.getDataF();
	
	r1.setDataK();
	r1.kelv();
	r1.getDataK();
}
