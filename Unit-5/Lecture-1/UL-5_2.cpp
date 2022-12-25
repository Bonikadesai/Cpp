#include<iostream>
using namespace std;

ostream &t(ostream &output)
{
	return output << "\t";
}

class cust{
	private:
		int cust_id;
		string cust_name;
		int cust_age;
		string cust_telecome_brand_name;
		long long int cust_mobile_number;
		string cust_city;
		int cust_simcard_validity;
	public:
		void setData(int i , int n)
		{
			system("cls");
			cout << "Customer no. : " << i << "/" << n << endl;
			cout << "Enter Customer Id : ";
			cin >> cust_id;
			cout << "Enter Customer Name : ";
			cin >> cust_name;
			cout << "Enter Customer Age : ";
			cin >> cust_age;
			cout << "Enter Customer Telecom Brand Name : ";
			cin >> cust_telecome_brand_name;
			cout << "Enter Customer Mobile Number : ";
			cin >> cust_mobile_number;
			cout << "Enter Customer City : ";
			cin >> cust_city;
			cout << "Enter Customer Simcard Validity : ";
			cin >> cust_simcard_validity;
		}
		void getData()
		{
			cout << endl << "Customer ID\t\t\t : " << cust_id << endl
						 << "Customer Name\t\t\t : " << cust_name << endl
						 << "Customer Age\t\t\t : " << cust_age << endl
						 << "Customer Telecom Brand Name\t : " << cust_telecome_brand_name << endl
						 << "Customer Mobile Number\t\t : " << cust_mobile_number << endl
						 << "Customer City\t\t\t : " << cust_city << endl
						 << "Customer Simcard Validity\t : " << cust_simcard_validity << endl;
		}
		
		static void header()
		{
			system("cls");
			cout << "C_id\tC_name\tC_age\tC_tel\tC_city\tC_sim\tC_mob\n======= ======= ======= ======= ======= ======= =======\n";
		}
		
		void getDataInTable()
		{
			cout << cust_id << t << cust_name << t << cust_age << t << cust_telecome_brand_name << t << cust_city << t << cust_simcard_validity << t << cust_mobile_number<< endl; 
		}
};

int main()
{
	int n,i;
	
	cout << "Enter number of Customer : ";
	cin >> n;
	
	cust c[n];
	
	for(i=0 ; i<n ; i++)
	{
		c[i].setData(i+1,n);
	}
	
	cust::header();
	
	for(i=0 ; i<n ; i++)
	{
		c[i].getDataInTable();
	}
}
