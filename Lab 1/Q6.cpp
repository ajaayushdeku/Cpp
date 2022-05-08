#include <iostream>
using namespace std;
int getarea();
int main()
{
    getarea();
	return 0;
}
int getarea()
{
	int l,b;
	int area;
	cout<<"Enter the value of l and b : ";
	cin>>l>>b;
	area=l*b;
	cout<<"Area : "<<area<<endl;
	return area;
}
