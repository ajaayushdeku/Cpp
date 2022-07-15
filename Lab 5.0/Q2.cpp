#include<iostream>
using namespace std;
class Class1{
	protected:
	int num1;
	public:
		void setNum1(int num1)
		{
			this->num1=num1;
		}
};
class Class2{
	protected:
	int num2;
	public:
		void setNum2(int num2)
		{
			this->num2=num2;
		}
};
class Class3 : public Class1,public Class2 {
	protected:
		int sum;
		public:
			int  sumNum()
			{
				return (num1+num2);
			}
};
int main()
{
	int n1,n2;
	cout<<"Enter Num1 and Num2 : ";
	cin>>n1>>n2;
	Class3 cl;
	cl.setNum1(n1);
	cl.setNum2(n2);
	cout<<"Sum of the Two Numbers : "<<cl.sumNum();
	return 0;
}
