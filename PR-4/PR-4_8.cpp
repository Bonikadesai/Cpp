#include<iostream>
using namespace std;

class hotel{
	private:
		int id;
		string name;
	public:
		
		hotel(int id , string name)
		{
			this->id = id;
			this->name = name;
			getData();
		}
		
		hotel(hotel &h)
		{
			id = h.id;
			name = h.name;
			getData();	
		}
		void getData()
		{
			cout << "Id\t : " << id << endl
				 << "H_name\t : " << name << endl;	
		}
};

int main()
{
	hotel h1(1,"Navjivan");
	hotel h2(2,"Amiras");
	hotel h3(3,"Avadh");
	hotel h4 = h1;
	h4.getData();
	hotel h5(h2);
	
}
