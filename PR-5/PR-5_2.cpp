#include<iostream>
using namespace std;

class mother{
	public:
		string name;
		int age;
		
		void setDataM()
		{
			cout << "Enter Mother Name : ";
			cin >> name;
			
			cout << "Enter Mother Age : ";
			cin >> age;
		}
		
		void getDataM()
		{
			cout << "Mother Name\t : " << name << endl
				 << "Mother Age\t : " << age << endl;
		}
};

class daughter : public mother{
	public:
		string name;
		int age;
		
		void setDataD()
		{
			cout << "Enter Daughter Name : ";
			cin >> name;
			
			cout << "Enter Daughter Age : ";
			cin >> age;
		}
		
		void getDataD()
		{
			cout << "Daughter Name\t : " << name << endl
				 << "Daughter Age\t : " << age << endl;
		}
}; 

int main(){
	daughter d1;
	
	d1.setDataM();
	d1.setDataD();
	
	d1.getDataM();
	d1.getDataD();
}
