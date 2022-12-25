#include<iostream>
using namespace std;

int main()
{
	int i;
	
	for(i=2000 ; i<=3000 ; i++)
	{
		if(i % 4 == 0)
		{
		    cout << "Leap year : " << i << endl;
	    }
	}
	return 0;
}
