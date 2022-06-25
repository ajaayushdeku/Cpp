#include<iostream>
using namespace std;
class Area{
	int length, breadth,area;
	public:
		Area(int length,int breadth)
		{
			this->length=length;
			this->breadth=breadth;
			area=length*breadth;
		}
		Area(int length)
		{
			this->length=length;
			area=length*length;
		}
		void displayArea()
		{
			cout<<area<<endl;
		}
};
int main()
{
	Area sq(12),rec(30,15);
	cout<<"Square's Area : ";
	sq.displayArea();
	cout<<"Rectangle's Area : ";
	rec.displayArea();
	return 0;
}
