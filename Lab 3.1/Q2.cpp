#include <iostream>
using namespace std;
class Circle
{
	float rad;
	public:
		void getradius()
		{
			cout<<"Enter the radius : ";
			cin>>rad;
		}
		void printarea()
		{
		    float area;
			area=3.14*rad*rad;
			cout<<"Area : "<<area<<endl;	
		}
};
int main()
{
    Circle c;
    c.getradius();
    c.printarea();
	return 0;
}

