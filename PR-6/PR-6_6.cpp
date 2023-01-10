#include<iostream>
using namespace std;

class distance{
	private:
		int feet;
		int inch;
	public:
		void setData()
		{
			cout << "Enter Feet Value : ";
			cin >> feet;
			cout << "Enter Inch Value : ";
			cin >> inch; 
		}	
		void getData()
		{
			cout << endl << "Feet\t : " << feet << endl
						 << "Inch\t : " << inch << endl;
		}
		distance operator+(distance &dist1)
		{
			distance tmp;
			tmp.inch = inch + dist1.inch;
			tmp.feet = feet + dist1.feet + (tmp.inch/12);
			tmp.inch = tmp.inch%12;
			return tmp;
		}
};

int main()
{
	distance d1,d2,d3;
	
	d1.setData();
	d2.setData();
	
	d3 = d1 + d2;
	
	d3.getData();
	
	return 0;
}
