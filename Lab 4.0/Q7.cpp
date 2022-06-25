#include<iostream>
using namespace std;
class Sum{
	int num1,num2;
	long num3,num4;
	int sum;
	public:
		Sum()
		{
			num1=2;
			sum=num1+num1;
		}
		Sum(int num1,int num2)
		{
			this->num1=num1;
			this->num2=num2;
			sum=num1+num2;
		}
		Sum(long num3,long num4)
		{
			this->num3=num3;
			this->num4=num4;
			sum=num3+num4;
		}
		void displaySum()
		{
			cout<<"Sum : "<<sum<<endl;
		}
};
int main()
{
	Sum s1,s2(2,3),s3(23423,23423);
	s1.displaySum();
	s2.displaySum();
	s3.displaySum();
	return 0;
}
