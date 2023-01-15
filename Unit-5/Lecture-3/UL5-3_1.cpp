#include<iostream>
using namespace std;

class time2;
class time1{
	private:
		int sec;
		int hour;
		int min;
	public:
		void setTime()
		{
			cout << "Enter second1 : ";
			cin >> sec;
		}
		void getTime()
		{
			cout << "Second1 : " << sec << endl;
		}
		friend void time3(time1,time2);
};

class time2{
	private:
		int sec;
		int hour;
		int min;
	public:
		void setTime()
		{
			cout << "Enter second2 : ";
			cin >> sec;
		}
		void getTime()
		{
			cout << "Second2 : " << sec << endl;
		}
		friend void time3(time1,time2);
};
void time3(time1 t1,time2 t2)
{
	int s,h,m;
	s = t1.sec + t2.sec;
	m = t1.min + t2.min;
	h = t1.hour + t2.hour;
	while(s>=60)
	{
		s = s-60;
		m++;	
	}
	while(m>=60)
	{
		m = m - 60;
		h++;
	}	
	cout << h << " : " << m << " : " << s << endl; 
}

int main()
{
	time1 T1;
	T1.setTime();
	time2 T2;
	T2.setTime();
	time3 (T1,T2);
}
