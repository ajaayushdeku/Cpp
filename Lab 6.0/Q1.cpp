#include <iostream>
using namespace std;
class unary
{
 public:
 int count;
 void getdata(int i)
 {
 count=i;
 }
 void showdata ()
 {
 cout<< "count=" <<count<<endl;
 }
 void operator ++()
 {
 ++count;
 }
  void operator --()
 {
 --count;
 }
};
int main()
{
 index a1;
 a1.getdata(3);
 a1.showdata(); 
 ++a1;
 a1.showdata();
 --a1;
 a1.showdata();
 return 0;
}

