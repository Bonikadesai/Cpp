#include<iostream>
using namespace std;

int main()
{
	int n[1000],count=0,i;
	
	for(i=2020 ; i<=3030 ; i++)
	{
		if(i % 4 == 0)
		{
			n[count]=i;
			count++;
		}
    }
    
	for(i=0 ; i<count ; i++)
	{
		cout << "Leap year : ";
		cout << n[i] << endl;
	}	
}
