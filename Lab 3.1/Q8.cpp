#include <iostream>
using namespace std;
class Number
{
    int num;
    static int count;
	public:

		void getdata()
		{
			cout<<"Enter the number ";
			cin>>num;
			count++;
       }
       static int getCount()
       {
       	  return count;
	   }
};
int Number :: count=0;

int main()
{
    Number n1,n2,n3,n4;
    n1.getdata();
	n2.getdata();
	n3.getdata();
	n4.getdata();
	cout<<"Count of function call by objects : "<<Number :: getCount();
	return 0;
}

