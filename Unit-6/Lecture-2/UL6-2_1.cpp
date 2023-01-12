#include<iostream>
using namespace std;

class RBI{
	protected:
		double NIC;
		double COI;
	public:
		void setROI()
		{
			cout << "Enter Net Income : ";
			cin >> NIC;
			cout << "Enter Cost of investment : ";
			cin >> COI;	
		}
		
};

class SBI : public RBI{
		double ROI=5;
	public :
		void getROI(){
			ROI = (NIC / COI) * 100;
			cout << endl << "SBI Return on Investment : " << ROI << endl;
		}
};

class BOB : public RBI{
		double ROI=10;
	public :
		void getROI(){
			ROI = (NIC / COI) * 100;
			cout << endl << "BOB Return on Investment : " << ROI << endl;
		}
};

class ICICI : public RBI{
		double ROI=7;
	public :
		void getROI(){
			ROI = (NIC / COI) * 100;
			cout << endl << "ICICI Return on Investment : " << ROI << endl;
		}
};

int main()
{
	SBI s;
	BOB b;
	ICICI i;
	
	s.setROI();
	s.getROI();
	
	b.setROI();
	b.getROI();
	
	i.setROI();
	i.getROI();
}
