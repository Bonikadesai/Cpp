#include<iostream>
using namespace std;

class time{
	private:
		int sec;
		int min;
		int hours;
	public:
		void setData()
		{
			cout << "Entre Second\t : ";
			cin >> sec;
		}
		
		void second()
		{
			hours = sec / 3600;
			sec = sec % 3600;
			min = sec / 60;
			sec = sec % 60;
		}
		
		void getData()
		{
			cout << endl << " " << hours << " : " << min << " : " << sec << endl;
		}
};

int main()
{
	time t1;
	
	t1.setData();
	
	t1.second();
	
	t1.getData();
}
