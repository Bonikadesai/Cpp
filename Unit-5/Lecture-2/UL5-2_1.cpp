#include<iostream>
using namespace std;

ostream &t(ostream &output)
{
	return output << "\t";
}

class hotel{
	private:
		int hotel_id; 
		static string hotel_name;
		string hotel_type;
		double hotel_rating;
		static string hotel_location;
		int hotel_establish_year;
		int hotel_staff_quantity;
	  	int hotel_room_quantity;
	public:
		void setDat(int i , int n)
		{
			system("cls");
			cout << "Customer no : " << i << "/" << n << endl;
			cout << "Enter Hotel Id : ";
			cin >> hotel_id;
			cout << "Enter Hotel Type : ";
			cin >> hotel_type;
			cout << "Enter Hotel Rating : ";
			cin >> hotel_rating;
			cout << "Enter Hotel Establish Year : ";
			cin >> hotel_establish_year;
			cout << "Enter Hotel Staff Quantity : ";
			cin >> hotel_staff_quantity;
			cout << "Enter Hotel Room Quantity : ";
			cin >> hotel_room_quantity;
		}	
		
		void getData()
		{
			cout << endl << "Hotel Id\t : " << hotel_id << endl
						 << "Hotel Type\t : " << hotel_type << endl
						 << "Hotel Rating\t : " << hotel_rating << endl
						 << "Hotel Establish year\t : " << hotel_establish_year << endl
						 << "Hotel Staff Quantity\t : " << hotel_staff_quantity << endl
						 << "Hotel Room Quntity\t : " << hotel_room_quantity << endl;				
		}	
		
		static void header()
		{
			cout << "H_id\tH_name\tH_type\tH_rate\tH_loc\tH_est_y\tH_staff\tH_room\n======= ======= ======= ======= ======= ======= ======= =======\n";
		}
		
		static void hotelName()
		{
			cout << hotel_name;
		}
		
		static void hotelLoc()
		{
			cout << hotel_location;
		}
		
		void getDataInTable()
		{
			cout << hotel_id << t << hotel_name << t << hotel_type << t << hotel_rating << t << hotel_location << t << hotel_establish_year << t << hotel_staff_quantity << t <<  hotel_room_quantity << endl;
		}
};

string hotel::hotel_name = "Founten";
string hotel::hotel_location = "Surat";

int main()
{
	int i,n;
	
	cout << "Enter the number of Coustemer : ";
	cin >> n;
	
	hotel h[n];
	
	for(i=0 ; i<n ; i++)
	{
		h[i].setDat(i+1,n);
	}
	
	system("cls");
	
	hotel::header();
	
	for(i=0 ; i<n ; i++)
	{
		h[i].getDataInTable();
	}
	
	
}

