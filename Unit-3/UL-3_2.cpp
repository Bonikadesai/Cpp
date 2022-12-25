#include<iostream>
using namespace std;

class Car{
	private:
		int car_id;
		string company_name;
		string car_color;
		string car_model;
		int car_relese_year;
		
	public:
		
		void setData()
		{
			cout << "Enter Car Id : ";
			cin >> car_id; 
			cout << "Enter Car Company Name : ";
			cin >> company_name;
			cout << "Enter Car Color : ";
			cin >> car_color;
			cout << "Enter Car Model : ";
			cin >> car_model;
			cout << "Enter Car Relese Year : ";
			cin >> car_relese_year;	
	 	}
	 	
	 	void getData()
	 	{
	 		cout << endl << "Car Name\t : " << car_id << endl
	 			 << "Car Company Name : " << company_name << endl
	 			 << "Car Color\t : " << car_color << endl
	 			 << "Car Model\t : " << car_model << endl
	 			 << "Car Relese Year : " << car_relese_year << endl; 
		}
};

int main()
{
	Car c1,c2,c3,c4;
	
	c1.setData();
	c2.setData();
	c3.setData();
	c4.setData();
	
	c1.getData();
	c2.getData();
	c3.getData();
	c4.getData();
	return 0;
}
