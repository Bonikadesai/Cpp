#include<iostream>
using namespace std;

class sum2;

class sum1{
	private:
		int a = 10;
	public:
		friend void add(sum1,sum2);
}; 

class sum2{
	private:
		int b = 20;
	public:
		friend void add(sum1,sum2);	
};

void add(sum1 s1 , sum2 s2)
{
	cout << "Addition : " << s1.a + s2.b << endl;
}

int main()
{
	sum1 s1;
	sum2 s2;
	add(s1,s2);
}
