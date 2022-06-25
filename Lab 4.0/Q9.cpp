#include<iostream>
using namespace std;
class Complex{
	int real,imag;
	public:
		Complex()
		{
		}
		Complex(int real,int imag)
		{
			this->real=real;
			this->imag=imag;
		}
		void displayComplex()
		{
			cout<<"Complex Number : "<<real<<" + "<<imag<<"i"<<endl;
		}
		void sum(Complex,Complex);
};
void Complex :: sum(Complex c1,Complex c2)
{
	int treal,timag;
	treal=c1.real+c2.real;
	timag=c1.imag+c2.imag;
	cout<<"Sum of two complex number : "<<treal<<" + "<<timag<<"i"<<endl;
}
int main()
{
	Complex com1(8,15),com2(5,27);
	cout<<"First ";
	com1.displayComplex();
	cout<<"Second ";
	com2.displayComplex();
	Complex com3;
	com3.sum(com1,com2);	
	return 0;
}
