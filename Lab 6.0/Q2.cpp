#include <iostream>
using namespace std;
class Multiply
{
	public:
		int num;
		Multiply(int num)
		{
			this->num=num;
		}
		Multiply operater * (Multiply obj)
		{
			Multiply m;
			m.num =num * obj.num;
			return m;
		}
		void display()
		{
			cout<<"Number : "<<num<<endl;
		}
};
int main()
{
	Multiply m1(2),m2(5);
	Multiply m3=m1*m2;
	m3.display();
 return 0;
}

