#include<iostream>
using namespace std;
class XYZ;
class ABC{
	int num1;
	public :
//		void setNum1(int num1){
//			this->num1=num1;
//		}
		void getNum1(){
			cout<<"Num 1 : ";
			cin>>num1;
		}
	friend void max(ABC,XYZ);
};
class XYZ{
	int num2;
	public :
//		void setNum2(int num2){
//			this->num2=num2;
//		}
		void getNum2(){
			cout<<"Num 2 : ";
			cin>>num2;
		}
		friend void max(ABC,XYZ);
};
void max(ABC x,XYZ y)
{
	if(x.num1 > y.num2){
		cout<<x.num1<<" is greatest."<<endl;
	}
	else{
		cout<<y.num2<<" is greatest."<<endl;
	}
	
}
int main()
{
	ABC a;
	XYZ b;
	a.getNum1();
	b.getNum2();
	max(a,b);
	
	return 0;
}
