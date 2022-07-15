#include<iostream>
using namespace std;
class HeightFT
{ 
   int feet;
   int inch;
   public:
    HeightFT(int feet, int inch)
    {
     this->feet=feet;
     this->inch=inch; 
    }
    
    int getFeet() 
    {
      return feet;
    }
    
	int getInch()
    {
     return inch;
    }
};
class HeightM
{
    int meter;
    float cm;
    public:
    HeightM()
    {
      meter=0;
      cm-0;
    }
    HeightM(int meter,float cm)
    {
    	this->meter=meter;
    	this->cm=cm;
    }
    HeightM(HeightFT h)
    {
    int ft,in;
    ft=h.getFeet();
    in=h.getInch();
    meter=ft/3.3;
    cm=in/0.39;
    meter=meter+cm/12;
//    cm=cm % 12;
    }
    
    void display()
    {
     cout<<meter<<"m"<<" "<<cm<<"cm"<<endl;
    }
};
main()
{
HeightFT h1(6,40);
HeightM h2=h1;
h2.display();
return 0;
} 
