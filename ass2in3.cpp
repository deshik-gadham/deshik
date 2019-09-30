#include<iostream>
using namespace std;

class batsman
{
	int bcode;
	char bname[20];
	int innings,notout,runs;
	int batavg;
	void calcavg()
	{
		batavg=runs/(innings-notout);
	}

public :
	void readdata ();
	void displaydata();
};

void batsman::readdata ()
{
	cout<<"Enter batsman code ";
	cin>> bcode;
	cout<<"Enter batsman name ";
	cin>>bname;
	cout<<"enter innings";
		cin>>innings;
	cout<<"notout";
	cin>>notout;
	cout<<" runs ";
    cin>>runs;
	calcavg();
}

void batsman::displaydata()
{
	cout<<"Batsman code "<<bcode<<"\nBatsman name "<<bname<<"\nInnings "<<innings
	<<"\nNot out "<<notout<<"\nRuns "<<runs<<"\nBatting Average "<<batavg;
}


int main()
{
	batsman obj;
	obj.readdata();
	obj.displaydata();
	return 0;
}
