#include<iostream>
using namespace std;
class Staff{
	protected:
		char *name,*address,*post;
		public:
			Staff(char *name,char *address,char *post )
			{
//				cout<<"Enter Name : "<<endl;
//				cin>>name;
//				cout<<"Enter Address : "<<endl;
//				cin>>address;
//				cout<<"Enter Post : "<<endl;
//				cin>>post;

                this->name=name;
                this->address=address;
                this->post=post;
			}
};
class Non_Teaching : virtual public Staff{

		public:
			Non_Teaching(char *name,char *address,char *post ):Staff(name,address,post )
			{
			}
			void displayNonTeaching()
			{
				cout<<"Name : "<<name<<endl;
				cout<<"Address : "<<address<<endl;
				cout<<"Post : "<<post<<endl;
			}
};
class Teaching : virtual public Staff{
	protected:
		char *dept;
		public:
			Teaching(char *name,char *address,char *dept ):Staff(name,address,post)
			{
			this->dept=dept;	
			}
			void displayTeaching()
			{
				cout<<"Name : "<<name<<endl;
				cout<<"Address : "<<address<<endl;
				cout<<"Department : "<<dept<<endl;
			}
};
class Admin : public Non_Teaching, public Teaching{
		protected:
		int workinghrs;
		public:
			Admin(char *name,char *address,char *post,int workinghrs):Staff(name,address,post)
			{
			this->workinghrs=workinghrs;	
			}
			void displayAdmin()
			{
				cout<<"Name : "<<name<<endl;
				cout<<"Address : "<<address<<endl;
				cout<<"Post : "<<post<<endl;
				cout<<"Working Hours : "<<workinghrs<<endl;
			}
};
int main()
{
	Non_Teaching n("aaa","asadasd","aaaaaa");
	n.displayNonTeaching();
	Teaching t("aaa","asadasd","aaaaaa");
	t.displayTeaching();
	Admin a("aaa","asadasd","aaaaaa",12);
	a.displayAdmin();
	return 0;
}
