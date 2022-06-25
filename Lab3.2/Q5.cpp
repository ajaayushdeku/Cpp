#include<iostream>
using namespace std;
class Height{
	int feet, inch;
	public:
		void getHeightData()
		{
			cout<<"Enter the Height :"<<endl;
			cout<<"Feets : ";
			cin>>feet;
			cout<<"Inches : ";
			cin>>inch;
		}
		void sum(Height,Height);
};
void Height :: sum(Height h1,Height h2)
{
	int sumhr,summin,sumsec,ss,sm,shh,smm;
	int tfeet,tinch;
	
	tfeet=h1.feet+h2.feet;
	tinch=h1.inch+h2.inch;
//	if(summin>60)
//	{
//		smm=summin-60;
//		shh=smm/60;
//		sumhr=sumhr+shh;
//	}
	cout<<"Sum of two heights : "<<tfeet<<"ft "<<tinch<<"inches"<<endl;
}
int main()
{
	Height ht1,ht2,h3;
	ht1.getHeightData();
	ht2.getHeightData();
	h3.sum(ht1,ht2);
	
	
	return 0;
}
