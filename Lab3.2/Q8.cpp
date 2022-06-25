#include <iostream>
using namespace std;
class Bank{
	string name,typeofact;
	long actnum,balance;
	public :
		void assignData()
		{
			cout<<"Enter Name : ";
			cin>>name;
			cout<<"Enter Account Number : ";
			cin>>actnum;
			cout<<"Enter Account Type : ";
			cin>>typeofact;
			cout<<"Enter Amount : ";
			cin>>balance;
		}
		void deposit()
		{
		    float depo;
            cout<<"Enter Amount to Deposit : ";
            cin>>depo;
            balance = balance + depo;
            cout<<"After Deposit, Current Balance : "<<balance<<endl;
        }
        void withdraw()
		{
            float withdraw;
            cout<<"Available Balance : "<<balance<<endl;
            cout<<"Enter Amount to Withdraw : ";
            cin>>withdraw;
            balance = balance - withdraw;
            cout<<"After Withdraw, Current Balance : "<<balance<<endl;
       }
        void displayNameBalance(){
            cout<<"Name: "<<name<<endl;
            cout<<"Balance: "<<balance<<endl;
       }
};
int main()
{
	Bank b;
	cout<<"Enter Your Bank Details : "<<endl;
	b.assignData();
	cout<<"To Deposit : "<<endl;
	b.deposit();
	cout<<"To Withdraw : "<<endl;
	b.withdraw();
	cout<<"Your Name and Balance : "<<endl;
	b.displayNameBalance();
	return 0;
}
