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
			
			cout << "Id\t : " << id << endl;
			cout << "Name\t : " << name << endl;
		}	
};

int main()
{
	hotel h(101 , "John Deo");
}
