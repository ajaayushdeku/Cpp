#include <iostream>
#include <math.h>
using namespace std;
float area(float );
int main()
{
	float radius,a;
	cout<<"Enter the radius of the circle : ";
	cin>>radius;
    a=area(radius);
    cout<<"Area : "<<a<<endl;
	return 0;
}
float area(float rad)
{
	float area;
	area=3.14*pow(rad,2);
	return area;
}
