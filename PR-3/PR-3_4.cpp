#include<iostream>
using namespace std;

class house{
	private:
		int h_no;
		int h_size;
		int h_bn;
		string h_color;
		string h_type;
	public:
		void setData()
		{
			cout << "Enter House Number : " ;
			cin >> h_no;
			cout << "Enter House Size : ";
			cin >> h_size;
			cout << "Enter House Bedroom No. : ";
			cin >> h_bn;
			cout << "Enter House Color : ";
			cin >> h_color;
			cout << "Enter House Type : ";
			cin >> h_type;
		}	
		
		void getData()
		{
			cout << endl << "House Number\t : " << h_no << endl
						 << "House Size\t : " << h_size << endl
						 << "House Room No.\t : " << h_bn << endl
						 << "House Color\t : " << h_color << endl
						 << "House Type\t : " << h_type << endl; 
		}
};

int main()
{
	house h1;
	
	h1.setData();
	
	h1.getData();
}
