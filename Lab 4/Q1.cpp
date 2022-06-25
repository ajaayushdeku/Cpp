#include<iostream>
using namespace std;
class Student{
	private :
		
		public:
			char n[20];
			Student()
			{
				
				char name[20];
				n[20]=name[20];
			}
			void getName()
			{
				cout<<"Enter the name of the student :"<<endl;
				cin>>n;
			}
			void displayName()
			{
				cout<<"Student name : "<<n<<endl;
			}
};
int main()
{
	Student s[10];
	int n,i;
	cout<<"How many student names you want to enter : "<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		s[i].getName();
	}
	for(i=0;i<n;i++)
	{
		if(s[i].n==" ")
		{
		cout<<"Unknown."<<endl;	
		}
		else{
			s[i].displayName();	
		}
	
	}
	return  0;
}
