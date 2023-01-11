#include<iostream>
using namespace std;

class RBI{
	protected:
		int b_rate;
	public:
		void setDataRBI()
		{
			cout << "\t\t\t\t----------Reserve Bank Of India----------\t\t\t" << endl;
			cout << "Enter Bank Rate : ";
			cin >> b_rate;
		}	
}; 

class SBI : public RBI{
	protected:
		int investAmount,ROI;
	public:
		void setDataSBI()
		{
			cout << endl << "\t\t\t\t----------State Bank Of India----------\t\t\t" << endl << endl;
			cout << "Enter Bank in Invest Amount : ";
			cin >> investAmount;
		}
		void getDataSBI()
		{
			ROI = investAmount * b_rate/100;
			cout << "Return Inverstment Amount State Bank of India : " << ROI << endl << endl; 
		}
};

class BOB : public RBI{
	protected:
		int investAmount,ROI;
	public:
		void setDataBOB()
		{
			cout << endl << "\t\t\t\t----------Bank Of Baroda----------\t\t\t\t" << endl << endl;
			cout << "Enter Bank in Invest Amount : ";
			cin >> investAmount;
		}
		void getDataBOB()
		{
			ROI = investAmount * b_rate/100;
			cout << "Return Inverstment Amount Bank Of Baroda : " << ROI << endl << endl; 
		}
};

class ICICI : public RBI{
	protected:
		int investAmount,ROI;
	public:
		void setDataICICI()
		{
			cout << endl << "\t\t\t----------Industrial Creadit Investment Corporation Of India----------\t\t\t" << endl << endl;
			cout << "Enter Bank in Invest Amount : ";
			cin >> investAmount;
		}
		void getDataICICI()
		{
			ROI = investAmount * b_rate/100;
			cout << "Return Inverstment Amount Industrial Creadit Investment Corporation Of India : " << ROI << endl << endl; 
		}
};

int main()
{
	SBI s1;
	BOB b1;
	ICICI i1;
	
	s1.setDataRBI();
	s1.setDataSBI();
	s1.getDataSBI();
	
	b1.setDataRBI();
	b1.setDataBOB();
	b1.getDataBOB();
	
	i1.setDataRBI();
	i1.setDataICICI();
	i1.getDataICICI();
}

