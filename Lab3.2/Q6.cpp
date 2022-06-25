#include<iostream>
using namespace std;
class Complex{
	int real,imag;
	public:
		void setComplexNum(int real,int imag)
		{
			this->real=real;
			this->imag=imag;
		}
		friend Complex sum(Complex,Complex);
};
Complex sum(Complex c1,Complex c2)
{
	Complex c3;
	int treal,timag;
	treal=c1.real+c2.real;
	timag=c1.imag+c2.imag;
	cout<<"Sum of two complex number : "<<treal<<" + "<<timag<<"i"<<endl;
	return c3;
}
int main()
{
	Complex com1,com2;
	com1.setComplexNum(2,5);
	com2.setComplexNum(4,7);
	Complex com3;
	com3=sum(com1,com2);	
	return 0;
}
