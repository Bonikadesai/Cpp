<center><h1>Unit_5 : DATA ENCAPSULATION</h1></center>

><u>**Aim**</u> : 1. WAP to get and display N numbers of Diamond
companies information using encapsulation and use of
parameterised constructor by including below
mentioned attributes:
- comp_id
- comp_name
- comp_staff_quantity
- comp_revenue (per year)
- comp_import_raw_diamonds (no. of raw diamonds
imported per year)
- comp_export_diamonds (no. of diamonds per year)
- comp_ceo (name of CEO of the company)

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    class comp{
        private:
            int comp_id;
            string comp_name;
            int comp_staff_quantity;
            int comp_revenue;
            int comp_import_raw_diamonds;
            int comp_export_diamonds;
            string comp_ceo;
        public:
            comp(
                int comp_id,
                string comp_name,
                int comp_staff_quantity,
                int comp_revenue,
                int comp_import_raw_diamonds,
                int comp_export_diamonds,
                string comp_ceo )
            {
                this->comp_id = comp_id;
                this->comp_name = comp_name;
                this->comp_staff_quantity = comp_staff_quantity;
                this->comp_revenue = comp_revenue;
                this->comp_import_raw_diamonds = comp_import_raw_diamonds;
                this->comp_export_diamonds = comp_export_diamonds;
                this->comp_ceo = comp_ceo;
                
                cout << endl << "Company Id\t\t\t : " << comp_id << endl
                            << "Company Name\t\t\t : " << comp_name << endl
                            << "Company staff quantity\t\t : " << comp_staff_quantity << endl
                            << "Company Revenue\t\t\t : " << comp_revenue << endl
                            << "Company Import Diamonds\t\t : " << comp_import_raw_diamonds << endl
                            << "Company Export Diamonds\t\t : " << comp_export_diamonds << endl
                            << "Company CEO Name\t\t : " << comp_ceo << endl;			 
            }
        comp(comp &c1);			
    };

    int main()
    {
        comp c1(1663,"Harishrishna",5000,100,50,25,"Govindbhai Dholakiya");
    }

><u>**Output**</u> :

<br>

><u>**Aim**</u> : 2. WAP to get and display N numbers of Fast Food cafe
information using encapsulation and use of default
constructor by including below mentioned attributes:
- cafe_id
- cafe_name
- cafe_type (like rooftop or normal)
- cafe_rating (like 1 Star, 2 Start, ..., 5 Star)
- cafe_location (city name)
- cafe_establish_year
- cafe_staff_quantity

><u>**Program**</u> : 

    #include<iostream>
    using namespace std;

    class cafe{
        private:
            int cafe_id;
            string cafe_name;
            string cafe_type;
            int cafe_rating;
            string cafe_location;
            int cafe_establish_year;
            int cafe_staff_quantity;
        public:
            void setData()
            {
                cout << "Cafe ID : ";
                cin >> cafe_id;
                cout << "Cafe Name : ";
                cin >> cafe_name;
                cout << "Cafe Type : ";
                cin >> cafe_type;
                cout << "Cafe Rating : ";
                cin >> cafe_rating;
                cout << "Cafe Location : ";
                cin >> cafe_location;
                cout << "Cafe Establish year : ";
                cin >> cafe_establish_year;
                cout << "Cafe Staff Quantity : ";
                cin >> cafe_staff_quantity;
            }	
            void getData()
            {
                cout << endl << "Cafe Id\t\t\t : " << cafe_id << endl
                            << "Cafe Name\t\t : " << cafe_name << endl
                            << "Cafe Type\t\t : " << cafe_type << endl
                            << "Cafe Rating\t\t : " << cafe_rating << endl
                            << "Cafe Location\t\t : " << cafe_location << endl
                            << "Cafe Esta. Year\t\t : " << cafe_establish_year << endl
                            << "Cafe Staff Quantity\t : " << cafe_staff_quantity << endl;
            }
            cafe()
            {
                setData();
                getData();
            }
    };

    int main()
    {
        cafe c;
    }

><u>**Output**</u> :

<br>