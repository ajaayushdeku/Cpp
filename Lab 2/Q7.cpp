#include <iostream>
using namespace std;
int area(int);
int area(int,int);
float area(float);
int main()
{
	int l,lr,br,a;
	float ar,r;
	cout<<"Enter the value of l of Square : ";
	cin>>l;
	cout<<"Enter the value of l and b of Reactangle: ";
	cin>>lr>>br;
	cout<<"Enter the value of r of Circle : ";
	cin>>r;
	a=area(l);
    cout<<"Area of Square is : "<<a<<endl;
    a=area(lr,br);
    cout<<"Area of Rectangle is : "<<a<<endl;
    ar=area(r);
    cout<<"Area of Circle is : "<<ar<<endl;
	return 0;
}
int area(int a)
{
   int ar;
   ar=a*a;
   return ar;
}
int area(int a,int b)
{
   int ar;
   ar=a*b;
   return ar;
}
float area(float b)
{
   float ar;
   ar=3.14*b*b;
   return ar;
}
