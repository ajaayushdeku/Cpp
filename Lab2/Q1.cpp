#include <iostream>
using namespace std;
int multiply(int,int);
int main()
{
	int x,y;
	cout<<"Enter the value of x and y : ";
	cin>>x>>y;
    cout<<"Multiplication : "<<multiply(x,y)<<endl;
	return 0;
}
inline int multiply(int a, int b)
{
	int mul;
	mul=a*b;
	return mul;
}
