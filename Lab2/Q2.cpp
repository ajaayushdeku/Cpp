#include <iostream>
using namespace std;
int greatest(int,int,int);
int main()
{
	int x,y,z;
	cout<<"Enter the value of x ,y and z : ";
	cin>>x>>y>>z;
    cout<<greatest(x,y,z)<<" is the greatest number."<<endl;
	return 0;
}
inline int greatest(int a, int b,int c)
{
   if(a>b)
   { 
     if(a>c)
     {
   	  return a;
     }
     else
     {
   	  return c;
     }
   }
   else
   {
   	 if(b>c)
     {
   	  return b;
     }
     else
     {
   	  return c;
     }
   }
}
