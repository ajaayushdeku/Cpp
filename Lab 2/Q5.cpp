#include <iostream>
#include <math.h>
using namespace std;
int power(int,int m=2);
int main()
{
	int n,po;
	cout<<"Enter the value of n : ";
	cin>>n;
	po=power(n);
    cout<<"Power is : "<<po<<endl;
	return 0;
}
int power(int a,int b)
{
   int p;
   p=pow(a,b);
   return p;
}
