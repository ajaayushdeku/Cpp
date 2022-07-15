#include<iostream>
#include<math.h>
using namespace std;
const double pi=3.141592654;
class polar
{
public:
float r,th;
polar(){}
polar(int a,int b)
{
r=a;
th=b;
}
void show()
{
cout<<"In polar form:\nr="<<r<<" and theta="<<th;
}
};
class rectangular
{
float x,y;
public:
rectangular(){}
rectangular(polar p)
{
float atheta=p.th*pi/180;
x=p.r*cos(atheta);
y=p.r*sin(atheta);
}
void show()
{
cout<<"\nIn Rectangular form:\nx="<<x<<" and y="<<y;
}
};
int main()
{
polar p(3,45);
p.show();
 rectangular r;
 r=p;
 r.show();
}

