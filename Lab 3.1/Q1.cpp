#include <iostream>
using namespace std;
class Rectangle
{
	int len,bre;
	public:
		void readdata()
		{
			cout<<"Enter the length and breadth : ";
			cin>>len>>bre;
		}
		void display()
		{
		    int area;
			area=len*bre;
			cout<<"Area : "<<area<<endl;	
		}
};
int main()
{
    Rectangle r1,r2;
    r1.readdata();
    r1.display();
    r2.readdata();
    r2.display();
	return 0;
}

