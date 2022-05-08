#include <iostream>
using namespace std;
class Square
{
	int len;
	public:
		void getlength()
		{
			cout<<"Enter the length : ";
			cin>>len;
		}
		void printarea()
		{
		    int area;
			area=len*len;
			cout<<"Area : "<<area<<endl;	
		}
		void printperimeter()
		{
			int peri;
			peri=4*len;
			cout<<"Perimeter : "<<peri<<endl;
		}
};
int main()
{
    Square s;
    s.getlength();
    s.printarea();
    s.printperimeter();
	return 0;
}

