#include<iostream>
using namespace std;
class AddAmount{
	int amount=50;
	public:
		AddAmount()
		{

		}
		AddAmount(int addamt)
		{
			amount=amount+addamt;
		}
		void displayFinalAmount()
		{
			cout<<"Final Amount : "<<amount<<endl;
		}
};
int main()
{
	AddAmount amt1,amt2(200);
	amt1.displayFinalAmount();
	amt2.displayFinalAmount();
	return 0;
	
}
