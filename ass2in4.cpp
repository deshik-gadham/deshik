#include <iostream>


using namespace std;
class student
{
	public:
		virtual void getdata()=0;
		virtual void display()=0;
	};
	class engeinnering:public student
	{
		public:
		int r;
		char n[10];
		public:
			void getdata()
			{
                cout<<"faculty->engeineering"<<endl;
				cout<<"enter name";
				cin>>n;
				cout<<"enter roll";
				cin>>r;
				
			}
			void display()
			{
				cout<<"name="<<n<<endl;
				cout<<"roll no="<<r<<endl;
				
			}
	};
	class medicine:public student
	{
		public:
		int r;
	    char n[10];
			void getdata()
			{
				cout<<"faculty->medicine"<<endl;
				cout<<"enter name";
				cin>>n;
				cout<<"enter roll";
				cin>>r;
				
			}
			void display()
			{
				cout<<"name="<<n<<endl;
				cout<<"roll no="<<r<<endl;
				
			}
		
	};
	class science:public student{
    public:
	int r;
    char n[10];
		void getdata()
		{
			cout<<"faculty->science"<<endl;
			cout<<"enter name";
			cin>>n;
			cout<<"enter roll no";
			cin>>r;
			
		}
		void display()
		{
			cout<<"name="<<n<<endl;
			cout<<"roll no="<<r<<endl;
					
			}
		};
		int main()
		{
		student *p;
		engeinnering e;
		medicine m;
		science s;
		p=&e;
		p->getdata();
		p->display();
		
		p=&m;
		p->getdata();
		p->display();
		
		p=&s;
		p->getdata();
		p->display();
		return 0;
}
