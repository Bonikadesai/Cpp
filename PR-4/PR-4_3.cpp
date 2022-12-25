#include<iostream>
using namespace std;

class hotel{
	private:
		int id;
		string name;
		string type;
		int staff_size;
		int room_size;
		int establish_year;
		string address;
		int rating_type;
		string website;
	public:
		void setData(
			int id , string name , string type,
			int staff_size , int room_size , int establish_year,
			string address , double rating_type , string website)
			
			{
				this->id = id;
				this->name = name;
				this->type = type;
				this->staff_size = staff_size;
				this->room_size = room_size;
				this->establish_year = establish_year;
				this->address = address;
				this->rating_type = rating_type;
				this->website = website; 
			}
		void getData(){
			cout << endl << "Id\t\t : " << id << endl
						 << "Name\t\t : " << name << endl
						 << "Type\t\t : " << type << endl
						 << "Staff_Size\t : " << staff_size << endl
						 << "Room_Size\t : " << room_size << endl
						 << "Establish_Year\t : " << establish_year << endl
						 << "Address\t\t : " << address << endl
						 << "Rating_Type\t : " << rating_type << endl
						 << "Website\t\t : " << website << endl;
		}	
};

int main()
{
	hotel h;
	h.setData(7951,"Bonika","Hotel",16,10,6,"Saputara",4.5,"www.bluevelilyhotel");
	h.getData();
}
