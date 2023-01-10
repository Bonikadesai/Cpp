#include<iostream>
using namespace std;

class obj{
	private:
		int a;
	public:
		void setData()
		{
			cout << "Enter A : ";
			cin >> a;
		}	
		void getData()
		{
			cout << "A : " << a << endl;
		}
		obj operator+(obj o)
		{
			obj tmp;
			tmp.a = this->a + o.a;
			return tmp;
		}
};

int main()
{
	obj o1,o2,o3;
	o1.setData();
	o2.setData();
	o3 = o1 + o2;
	o1.getData();
	o2.getData();
	o3.getData();
}
