#include<iostream>
using namespace std;
class Train
{
	int idno;
	char name[20];
	public:
		int fare;
		void gettdetails()
		{
			cout<<"enter the train no , name,fare:";
			cin>>idno>>name>>fare;
		}
		void displaytdetails()
		{
			cout<<"train idno:"<<idno<<endl;
			cout<<"train name:"<<name<<endl;
			cout<<"train fare:"<<fare<<endl;
		}
};
class Ticket:public Train
{
	int seatavailability;
	int ntick,ttick,ptick;
	public:
		void getdetails()
		{
			cout<<"enter the seat availability:";
			cin>>seatavailability;
		}
		void display()
		{
			ntick=fare+10;
			cout<<"normal ticket:"<<ntick<<endl;
			ttick=fare+50;
			cout<<"tatkal ticket:"<<ttick<<endl;
			ptick=fare+100;
			cout<<"premiumtatkal ticket:"<<ptick<<endl;
			
		}
	
};
int main()
{
	Ticket t;
	t.gettdetails();
	t.getdetails();
	t.displaytdetails();
	t.display();
	return 0;
	
}
