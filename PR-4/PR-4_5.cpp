#include<iostream>
using namespace std;

class state{
	private:
		string city;
		string district;
		string states;
		static string country;
	public:
		void setData()
		{
			cout << "Enter City Name : ";
			cin >> city;
			cout << "Enter District Name : ";
			cin >> district;
			cout << "Enter State Name : ";
			cin >> states;
		}	
		
		void getData()
		{
			cout << endl << "City\t : " << city << endl
						 << "District : " << district << endl
						 << "State\t : " << states << endl
						 << "Country\t : " << country << endl;
		}
		
};

string state::country = "India";

int main()
{
	state s;
	s.setData();
	s.getData();
}
