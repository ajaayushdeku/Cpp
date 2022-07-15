#include<iostream>
using namespace std;
class Shape{
	protected:
	int area,breadth,height;
	public:
		Shape(){
		}
		
		void setShapeData(int breadth,int height)
		{
			this->breadth=breadth;
			this->height=height;
		}
};
class Triangle : public Shape{

	public:
		int areaTriangle()
		{
			return (0.5*breadth*height);
		}
		void display()
		{
			cout<<"Area of Triangle : "<<areaTriangle()<<endl;
		}
};
class Rectangle : public Shape {
	public:
		int areaRectangle()
		{
			return (breadth*height);
		}
		void display()
		{
			cout<<"Area of Rectangle : "<<areaRectangle()<<endl;
		}
};
int main()
{
	Triangle T;
	Rectangle R;
	cout<<"Triangle:"<<endl;
	T.setShapeData(12,34);
	T.areaTriangle();
	T.display();
	
	cout<<"Rectangle:"<<endl;
	R.setShapeData(12,34);
	R.areaRectangle();
	R.display();
	return 0;
}
