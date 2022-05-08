#include <iostream>
using namespace std;
int add(int ,int );
int main()
{
	int a,b,sum;
	cout<<"Enter the value of a and b: ";
	cin>>a>>b;
	add(a,b);
	return 0;
}

int add(int x, int y)
{
	int sum;
	sum=x+y;
	cout<<"Sum of two numbers : "<<sum;
	return sum;
}
