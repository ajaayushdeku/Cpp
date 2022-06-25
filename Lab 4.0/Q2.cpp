#include<iostream>
using namespace std;
class Rectangle{
	int length,breadth;
	public:
		Rectangle()
		{
			length=0;
			breadth=0;
		}
		Rectangle(int length,int breadth)
		{
			this->length=length;
			this->breadth=breadth;
		}
		Rectangle(int value)
		{
			length=value;
			breadth=value;
		}
		void displayParameter()
		{
			int peri=length*breadth;
			cout<<"Perimeter : "<<peri<<endl;
		}
};
int main()
{
	Rectangle r1,r2(10,30),r3(10);
	r1.displayParameter();
	r2.displayParameter();
	r3.displayParameter();
	
	return 0;
}
