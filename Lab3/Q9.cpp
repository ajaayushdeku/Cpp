#include <iostream>
using namespace std;
class Student
{
	char sname[20];
	int marks[10],total,tmax;
	float average;
	public:
		void assign()
		{
			cout<<"Enter the name of the Student: ";
			cin>>sname;
			for(int i=1;i<=5;i++)
			{
				cout<<"Enter the marks of "<<i<<" subject: ";
   			    cin>>marks[i];
			}
		}
		void compute()
		{
			for(int i=1;i<=5;i++)
			{
				total=total+marks[i];
			}
			average=total/5;
		}
     	void display()
	    {
	    	cout<<"Student's Data : "<<endl;
            cout<<"Name : "<<sname<<endl;
	    	cout<<"Total marks : "<<total<<endl;
     		cout<<"Average : "<<average<<endl;
    	}
};
int main()
{
    Student s;
    s.assign();
   	s.compute();
	s.display();
	return 0;
}

