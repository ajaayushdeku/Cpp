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
		void displayComplex()
		{
			cout<<"Complex Number : "<<real<<" + "<<imag<<"i"<<endl;
		}
		friend Complex sum(Complex,Complex);
};
Complex sum(Complex c1,Complex c2)
{
	Complex c3;
//	int treal,timag;
	c3.real=c1.real+c2.real;
	c3.imag=c1.imag+c2.imag;
	cout<<"Sum of two complex number : "<<c3.real<<" + "<<c3.imag<<"i"<<endl;
	return c3;
}
int main()
{
	Complex com1,com2;
	com1.setComplexNum(2,5);
	com2.setComplexNum(4,7);
	cout<<"First ";
	com1.displayComplex();
	cout<<"Second ";
	com2.displayComplex();
	Complex com3;
	com3=sum(com1,com2);	
	return 0;
}
