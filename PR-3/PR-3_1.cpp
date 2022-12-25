#include<iostream>
using namespace std;

class distans{
	private:
		int inch1;
		int feet1;
		int inch2;
		int feet2;
		int inch3;
		int feet3;
	public:
		void setData()
		{
			cout << "Enter Inch1 : ";
			cin >> inch1;
			cout << "Enter Feet1 : ";
			cin >> feet1;
			cout << "Enter Inch2 : ";
			cin >> inch2;
			cout << "Enter Feet2 : ";
			cin >> feet2;
		}	
		
		void inchFeet()
		{
			inch3 = inch1 + inch2;
			feet3 = feet1 + feet2;
			
			while(inch3>=12)
			{
				inch3 = inch3 - 12;
				feet3++;
			}
		}
		
		void getData()
		{
			cout << endl << "Inch1\t : " << inch1 << endl
						 << "Feet1\t : " << feet1 << endl
						 << "Inch2\t : " << inch2 << endl
						 << "Feet2\t : " << feet2 << endl
						 << "Inch3\t : " << inch3 << endl
						 << "Feet3\t : " << feet3 << endl;
		}
};

int main()
{
	distans d1,d2,d3;
	
	d1.setData();
	
	d1.inchFeet();
	
	d1.getData();
	


}
