#include <iostream>
using namespace std;
int multiply();
int multiply(int,int);
int multiply(int, int, int);
int main()
{
	int x,y,z,mul;
	cout<<"Enter the value of x, y and z: ";
	cin>>x>>y>>z;
	mul=multiply(x,y);
    cout<<"Multiplication is : "<<mul<<endl;
    mul=multiply(x,y,z);//three arguments
    cout<<"Multiplication is : "<<mul<<endl;
    multiply();//no agruments
	return 0;
}
int multiply(int a,int b)
{
   int m;
   m=a*b;
   return m;
}
int multiply()
{
   int m,a,b;
   	cout<<"Enter the value of a and b : ";
	cin>>a>>b;
   m=a*b;
   cout<<"Multiplication is : "<<m<<endl;
   return m;
}
int multiply(int a,int b,int c)
{
   int m;
   
   return m=a*b*c;;
}
