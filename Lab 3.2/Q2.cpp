#include<iostream>
using namespace std;
class Time{
	int hr, min, sec;
	public:
		void getTimeData()
		{
			cout<<"Hours : ";
			cin>>hr;
			cout<<"Minutes : ";
			cin>>min;
			cout<<"Seconds : ";
			cin>>sec;
		}
		friend Time sum(Time,Time);
};
Time sum(Time t1,Time t2)
{
	Time t3;
	int sumhr,summin,sumsec,ss,sm,shh,smm;
	
	sumhr=t1.hr+t2.hr;
	summin=t1.min+t2.min;
	sumsec=t1.sec+t2.sec;
	if((sumsec)>60)
	{
		ss=sumsec-60;
		sm=ss/60;
		summin=summin+sm;
	}
	if(summin>60)
	{
		smm=summin-60;
		shh=smm/60;
		sumhr=sumhr+shh;
	}
	cout<<"Sum of two time : "<<sumhr<<"hrs "<<summin<<"min "<<sumsec<<"sec"<<endl;
	return t3;
}
int main()
{
	Time time1,time2;
	time1.getTimeData();
	time2.getTimeData();
	Time time3;
	time3=sum(time1,time2);
	
	
	return 0;
}
