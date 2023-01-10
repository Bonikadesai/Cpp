#include<iostream>
using namespace std;

class Motor{
	protected :
		int n;
		string esc = "Your car is not ready!!";
	public :
		void setdata(){
			cout << "Enter the car code 0 or N value : ";
			cin  >> n;
			
			if(n==0)
			{
				throw esc;
			}
			else
			{
				cout <<"Your car is Completly ready..";
			}
		}
};
class Garage : public Motor{
	public :
	    Garage(){
			try{
				setdata();
			}
			catch(string esc){
				cout << esc;
			}
		}
};
class Car {
	public :
		Car(){
			Garage g;
		}
};
int main(){
	Car C;	
}

