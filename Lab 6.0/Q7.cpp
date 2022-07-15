#include<iostream>
using namespace std;
template<class T>
class Calculation
{
   private:
   T num1, num2,sum,diff;
   public:
   Calculation( T n1,T n2)
   {
     num1=n1;
     num2=n2;
   }
   void cal()
   {
   	sum=num1+num2;
     cout<<"SUM : "<<sum<<endl;
    diff=num1-num2;
     cout<<"DIFFRENCE : "<<diff<<endl;
   }

};
int main()
{
Calculation <int> p1(15,30);
Calculation <float>p2(45.6,95.8);
cout<<"Integers : "<<endl;
p1.cal();
cout<<"FLoat : "<<endl;
p2.cal();
return 0;
}
