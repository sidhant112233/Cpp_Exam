#include<iostream>
#include<string.h>
using namespace std;

class imployee{
	public :
	int id;
	char name[100];
	char role[100];
	int salary;
	char experience[100];
	char comp_name[100];
	char add;
	char email[100];
	int contact;
	
	void setter()
	{
		cout<<"Enter id = ";
		cin>>id;
		cout<<"Enter name = ";
		cin>>name;
		cout<<"Enter role = ";
		cin>>role;
	}
	};
	class B : public imployee{
		public :
		void setter()
		{
		cout<<"Enter salary = ";
		cin>>salary;
		cout<<"Enter experience = ";
		cin>>experience;
		}
	};	
	class C : public imployee : public B{
		public :
		void setter()
		{
		cout<<"Enter comp_name = ";
		cin>>comp_name;
		cout<<"Enter add = ";
		cin>>add;
		}
		void getter()
		{
			cout<<name<<endl
				<<role<<endl
				<<salary<<endl;
		}
	};
	class D : public imployee : public B : public C   {
		public :
		void setter()
		{
			cout<<"Enter email = ";
			cin>>email;
			cout<<"Enter contact = ";
			cin>>contact;
		}
		void getter()
		{
			cout<<id<<endl
				<<name<<endl
				<<role<<endl
				<<salary<<endl;
				<<experience<<endl
				<<comp_name<<endl
				<<add<<endl
				<<email<<endl
				<<contact<<endl;
		}
	};
main()
{
	imployee I;
	I.setter();
	
	B b;
	b.setter();
	
	C c;
	c.setter();
	c.getter();
	
	D d;
	d.setter();
	d.getter();
}
