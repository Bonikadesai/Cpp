#include<iostream>
using namespace std;

class M{
	int a,b;
	string esc = "Cannot devide by ZERO";
	
	public :
		void setData(){
			cout << "Enter the value of A : ";
			cin  >> a;
			cout << "Enter the value of B : ";
			cin  >> b;
			
			if(b==0)
			{
				throw esc;
			}
			else
			{
				cout <<"Answer : " << a/b << endl;
			}
		}
};
int main(){
	M m;
	try {
		m.setData();
	}
	catch(string esc)
	{
		cout << esc;
	}
}

