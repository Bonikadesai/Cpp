#include<iostream>
using namespace std;

class hotel{
	private:
		int id;
		string name;
		static int count;
	public:
		hotel()
		{
			id = count;
			cout << "Id\t : " << id << endl;
			count++;
		}
		
		~hotel()
		{
			cout << "Id : " << id << " is deleted.." << endl;
		}	
};

int hotel::count=1;

int main()
{
	hotel h[10];
}
