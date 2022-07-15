#include<iostream>
#include<math.h>
using namespace std;
const double pi=3.141592654;
class rectangular
{
double x,y;
public:
rectangular()
{
x=0;
y=0;
}
rectangular(double a,double b)
{
x=a;
y=b;
}
void output()
{
cout<<"\nIn Rectangular form:\nx="<<x<<" and y="<<y;
}
};

class polar
{
int theta,r;
public:
polar (double r,double theta)
{
this->r=r;
this->theta=theta;
}
operator rectangular()
{
double x,y;
float atheta=theta*pi/180;
x=r*cos(atheta);
y=r*sin(atheta);
return rectangular(x,y);
}
void output()
{
cout<<"\nr="<<r;
cout<<"\ntheta="<<theta;
}
};
int main()
{
rectangular r1,r2;
polar p1(3,45);
r1=p1;// polar to rectangular conversion
r1.output();
}
