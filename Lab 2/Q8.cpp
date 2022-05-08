#include <iostream>
using namespace std;
int volume(int);
int volume(int,int,int);
float volume(float,int);
int main()
{
	int l,lc,bc,hc,hr,v;
	float vol,r;
	cout<<"Enter the value of l of Cube : ";
	cin>>l;
	cout<<"Enter the value of l, b and h of Cuboid : ";
	cin>>lc>>bc>>hc;
	cout<<"Enter the value of r and h for Cylinder : ";
	cin>>r>>hr;
    cout<<"Volume of Cube is : "<<volume(l)<<endl;

    cout<<"Volume of Cuboid is : "<<volume(lc,bc,hc)<<endl;

    cout<<"Volume of Cylinder is : "<<volume(r,hr)<<endl;
	return 0;
}
int volume(int a)
{
   int vol;
   
   return vol=a*a*a;
}
int volume(int a,int b, int c)
{
   int vol;
   
   return vol=a*b*c;
}
float volume(float a,int b)
{
   float vol;

   return vol=3.14*a*a*b;
}
