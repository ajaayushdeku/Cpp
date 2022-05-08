#include <iostream>
using namespace std;
float FtoC(float);
int main()
{
	float f;
	cout<<"Enter the Fahrenheit : ";
	cin>>f;
    cout<<f<<" converted to centigrade is : "<<FtoC(f)<<endl;
	return 0;
}
inline float FtoC(float fah)
{
   float cen;
   cen=(fah-32)*5/9;
   return cen;
}
