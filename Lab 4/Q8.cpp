#include<iostream>
using namespace std;
class Time{
	int hour;
	int min;
	int sec;
	public:
		Time()
		{
			hour=0;
			min=0;
			sec=0;
		}
		Time(int hour,int min,int sec)
		{
			this->hour=hour;
			this->min=min;
			this->sec=sec;
		}
		void displayTime()
		{
			cout<<hour<<":"<<min<<":"<<sec<<endl;
		}
		void sum(Time,Time);
		
};
void Time :: sum(Time t1,Time t2)
{
	int sum,thour,tmin,tsec;
	thour=t1.hour+t2.hour;
	tmin=t1.min+t2.min;
	tsec=t1.sec+t2.sec;
	hour=thour;
	min=tmin;
	sec=tsec;
}
int main()
{
	Time time1,time2(2,34,23),time3;
	time1.displayTime();
	time2.displayTime();
	time3.sum(time1,time2);
	time3.displayTime();
	return 0;
}
