#include<iostream>
using namespace std;
class DB;
class DM{
	float m,cm;
	public :
		void setDistanceM(float m,float cm){
			this->m=m;
			this->cm=cm;
		}
	friend void sum(DM,DB);
};
class DB{
	float ft,in;
	public :
		void setDistanceB(float ft,float in){
			this->ft=ft;
			this->in=in;
		}
		friend void sum(DM,DB);
};
void sum(DM x,DB y)
{
	float tm,tcm,tft,tin;
	tm=x.m+y.ft/3.28;
	tcm=x.cm+y.in/0.39;
	tft=y.ft+x.m*3.28;
	tin=y.in+x.cm*0.39;
	cout<<"Sum of the heights in Meters and Centimeters : "<<tm<<"m and "<<tcm<<"cm"<<endl;
	cout<<"Sum of the heights in Feets and Inches : "<<tft<<"ft and "<<tin<<"inches"<<endl;
}
int main()
{	
    DM m;
    DB b;
    m.setDistanceM(3,45);
    b.setDistanceB(5,4);
    sum(m,b);
	return 0;
}
