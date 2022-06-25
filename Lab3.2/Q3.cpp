#include<iostream>
using namespace std;
class Sample{
	float num1,num2;
	public :
		void setNumbers(float num1,float num2){
			this->num1=num1;
			this->num2=num2;
		}
//		void getNumbers(){
//			cout<<"Num 1 : ";
//			cin>>num1;
//			cout<<"Num 2 : ";
//			cin>>num2;
//		}
	friend void mean(Sample);
};
void mean(Sample x)
{
	float mean;
	mean=(x.num1+x.num2)/2;
	cout<<"Mean of the two values is "<<mean;
}
int main()
{
	Sample sam;
//	sam.getNumbers();
sam.setNumbers(3,6);
	mean(sam);
	
	return 0;
}
