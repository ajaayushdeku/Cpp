#include <iostream>
using namespace std;
int main()
{
	int num, c=0;
	cout<<"Enter the value of num: ";
	cin>>num;
	for(int i=1;i<=num;i++)
	{
	
		if(num%i==0)
		{
			c++;
		}
	}
	if (c==2)
	{
		cout<<"Prime"<<endl;
	}
	else
	{
		cout<<"Not Prime"<<endl;
	}
	return 0;
}
