#include<iostream>
using namespace std;
class SI{
	int principle,time;
	float rate;
	public:
		SI(float rate=0.8)
		{
			int principle,time;
			this->principle=principle;
			this->rate=rate;
			this->time=time;
		}
		void getData()
		{
			cout<<"Principle : ";
			cin>>principle;
			cout<<"Time : ";
			cin>>time;
		}
		void displaySimpleInterest()
		{
			float si=(principle*rate*time)/100;
			cout<<"Simple Interest : "<<si<<endl;
		}
};
int main()
{
	SI s;
	s.getData();
	s.displaySimpleInterest();
	return 0;
}
