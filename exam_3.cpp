#include<iostream>
#include<string.h>
using namespace std;

class hotel{
	public :
		
	int id;
	char name[100];
	char type[100];
	int staff_size;
    int room_size;
	int establish_year;
	char add[100];
	int rating_type;
	char website[100];
	
	void set()
	{
		cout<<"Enter hotel id = ";
		cin>>id;
		cout<<"Enter hotel name = ";
		cin>>name;
		cout<<"Enter hotel type = ";
		cin>>type;
		cout<<"Enter hotel staff_size = ";
		cin>>staff_size;
		cout<<"Enter hotel room_size = ";
		cin>>room_size;
		cout<<"Enter hotel establish_year = ";
		cin>>establish_year;
		cout<<"Enter hotel add = ";
		cin>>add;
		cout<<"Enter hotel rating type = ";
		cin>>rating_type;
		cout<<"Enter hotel website = ";
		cin>>website;
	}
	void get()
	{
		cout<<id<<endl
			<<name<<endl
			<<type<<endl
			<<staff_size<<endl
			<<room_size<<endl
			<<establish_year<<endl
			<<add<<endl
			<<rating_type<<endl
			<<website<<endl;
		
	}
};
main()
{
	hotel h;
	h.set();
	h.get();
}
