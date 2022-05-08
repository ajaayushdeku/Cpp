#include <iostream>
using namespace std;
float PtoKg(float);
int main()
{
	float p;
	cout<<"Enter the Pound : ";
	cin>>p;
    cout<<p<<" converted to Kilogram is : "<<PtoKg(p)<<endl;
	return 0;
}
inline float PtoKg(float pound)
{
   float kilo;
   kilo=pound*0.453592;
   return kilo;
}
