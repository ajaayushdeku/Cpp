#include <iostream>
using namespace std;
class Unary
{
 public:
 int num;
 void getNum(int num)
 {
 this->num=num;
 }
 
 void showNum()
 {
 cout<< "Number : " <<num<<endl;
 }
 
 void operator ++()
 {
 ++num;
 }
 
  void operator --()
 {
 --num;
 }
};
int main()
{
 Unary u;
 u.getNum(12);
 u.showNum(); 
 ++u;
 cout<<"After Increment :"<<endl;
 u.showdata();
 --u;
 cout<<"After Decrement :"<<endl;
 u.showdata();
 return 0;
}

