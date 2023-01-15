#include<iostream>
#include<string.h>
using namespace std;

class M{
	int a,b,age;
	string esc = "Cannot devide by ZERO";
	char pass[20],cp[20];
	int up=0,lw=0,at=0,dot=0,dig=0,sc=0,sp=0,n,m,i;
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
		void setAge(){
		
			cout << "Enter Age : ";
			cin >> age;
			
			if(age>18)
			{
				cout << "You can vote..\n";
			}
			else if(age==18)
			{
				cout << "You can also vote\n";
			}
			else if(age<18)
			{
				cout << "You can not vote\n";
			}
		}
		void setPass()
		{
			cout << "Enter Your Password : ";
			cin >> pass;
		m = strlen(pass);
			
		for(i=0 ; i<strlen(pass) ; i++)	
		{
			if(pass[i]>='A' && pass[i]<='Z')
			{
				up++;
			}
			else if(pass[i]>='a' && pass[i]<='z')
			{
				lw++;
			}
			else if(pass[i]>='0' && pass[i]<='9')
			{
				dig++;
			}
			else if(pass[i]=='.')
			{
				dot++;
			}
			else if(pass[i]=='@')
			{
				at++;
			}
			else if(pass[i]==' ')
			{
				sp++;
			}
			else
			{
				sc++;
			}
		}
			if(lw>0 && at==0 && dot==0 && up>=0 && sp==0 && sc>=0 && strlen(pass)>=8)
			{
				cout << "Confirm your password : " << cp;
				cin >> cp;
					
				strlwr(pass);
				strlwr(cp);
				
				n = strcmp(pass,cp);
				
				if(n==0)
				{
					cout << "You have a correct password" << endl;
				}
				else
				{
					cout << "Your password is incorrect" << endl;
				}
			}
			else
			{
				cout << "Your password is not correct.." << endl;
			}
		}
	
};
int main(){
	M m;
	try {
		m.setAge();
		m.setPass();
		m.setData();
	}
	catch(string esc)
	{
		cout << esc;
	}
}

