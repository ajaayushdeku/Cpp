#include <iostream>
using namespace std;
class Item
{
    int inum;
	public:
		static int c;
		void getdata()
		{
			cout<<"Enter the data item number ";
			cin>>inum;
			c++;
       }
};
int Item :: c=0;

int main()
{
    Item i1,i2,i3,i4;
    i1.getdata();
	i2.getdata();
	i3.getdata();
	i4.getdata();
	cout<<"Count of function call by objects : "<<Item :: c;
	return 0;
}

