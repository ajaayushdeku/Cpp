#include <iostream>
using namespace std;
class Employee
{
	char ename[20],eaddress[20];
	int ephone,salary,netsalary,tax;
	void calculate()
	{
		netsalary=salary-tax;
	}
	public:
		void input()
		{
			cout<<"Enter the name of the Employee: ";
			cin>>ename;
			cout<<"Enter the Address of the Employee: ";
			cin>>eaddress;
			cout<<"Enter the Phone no. of the Employee:";
			cin>>ephone;
			cout<<"Enter the Employee's Salary and Tax : "<<endl;
			cin>>salary>>tax;
		}
     	void output()
	    {
	    	calculate();
	    	cout<<"Employee's Detail : "<<endl;
            cout<<"Name : "<<ename<<endl;
	    	cout<<"Address : "<<eaddress<<endl;
     		cout<<"Phone Number : "<<ephone<<endl;
    		cout<<"Salary : "<<salary<<endl;
    		cout<<"Net-Salary : "<<netsalary<<endl;
    	}
};
/*void Employee :: calculate()
{
		netsalary=salary-tax;
}*/

	/*void Employee :: output()
	{
		calculate();
		cout<<"Employee's Detail : "<<endl;
        cout<<"Name : "<<ename<<endl;
		cout<<"Address : "<<eaddress<<endl;
		cout<<"Phone Number : "<<ephone<<endl;
		cout<<"Salary : "<<salary<<endl;
		cout<<"Net-Salary : "<<netsalary<<endl;
	}*/
int main()
{
    Employee e;
    e.input();
   	e.output();
	
	return 0;
}

