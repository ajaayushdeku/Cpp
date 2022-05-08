#include <iostream>
using namespace std;
class Large
{
	int a,b;
	int c=0;
	public:
		void get()
		{
			cout<<"Enter the value of a and b : ";
			cin>>a>>b;
		}
		void largest()
		{
			if(a>b)
			{
				c=0;
			}
			else
			{
				c=1;
			}
		}
		void put()
		{
			if(c==0)
			{
				cout<<a<<" is the largest"<<endl;
			}
			else
			{
				cout<<b<<" is the largest"<<endl;
			}
	
		}
};
int main()
{
    Large l;
    l.get();
    l.largest();
    l.put();
	return 0;
}

