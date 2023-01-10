#include<iostream>
using namespace std;

class mesg{
	private:
		string a;
	public:
		void print()
		{
			cout << "Functions no argument..." << endl;
		}
		void print(string m)
		{
			cout << "String argument is function..." << endl;
		}
		mesg(string m)
		{
			cout << "Enter string value : "<< m << endl;
		}
};

int main()
{
	mesg m("Welcome to Overloading topic in c++");
	m.print();
	m.print("Method Overloading...");
	
	return 0;
}
