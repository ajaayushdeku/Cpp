#include<iostream>
using namespace std;
class Num2;
class Num1{
	int num1;
	public :
		void setNum1(int num1){
			this->num1=num1;
		}
//		void getNum1(){
//			cout<<"Num 1 : ";
//			cin>>num1;
//		}
	friend void swap(Num1,Num2);
};
class Num2{
	int num2;
	public :
		void setNum2(int num2){
			this->num2=num2;
		}
//		void getNum2(){
//			cout<<"Num 2 : ";
//			cin>>num2;
//		}
		friend void swap(Num1,Num2);
};
void swap(Num1 x,Num2 y)
{
	int temp;
	cout<<"Before Swap : "<<endl;
	cout<<"Num 1 : "<<x.num1<<endl;
	cout<<"Num 2 : "<<y.num2<<endl;
	temp=x.num1;
	x.num1=y.num2;
	y.num2=temp;
	cout<<"After Swap : "<<endl;
	cout<<"Num 1 : "<<x.num1<<endl;
	cout<<"Num 2 : "<<y.num2<<endl;
	
}
int main()
{
	Num1 n1;
	Num2 n2;
	n1.setNum1(9);
	n2.setNum2(5);
	swap(n1,n2);
	return 0;
}
