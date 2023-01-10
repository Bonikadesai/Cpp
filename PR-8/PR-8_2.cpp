#include<iostream>
#include<string.h>
using namespace std;

class A{
	protected:
		int a;
		int b;
		string esc = "Cannot Devide by ZERO";
	public:
		
		void setData()
		{
			
			cout << "Enter A : ";
			cin >> a;
			cout << "Enter B : ";
			cin >> b;
			
			try{
				if(b==0)
				{
					throw esc;
				}
				else
				{
					cout << "Answer : " << a/b << endl;
				}
			}
			catch(char c)
			{
				cout << "Base value cannot be charcter.." << endl; 
			}
			catch(double d)
			{
				cout << "Enter Only Integer Value.." << endl;
			}
			catch(...)
			{
				cout << "General Exception Block.." << endl;
			}
		}
};

int main()
{
	A a;
	a.setData();
}
