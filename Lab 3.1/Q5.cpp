#include <iostream>
using namespace std;
class Batsman
{
	char name[20];
	int runs,fours,sixes;
	public:
		void assigndata()
		{
			cout<<"Enter the name of the batsman: ";
			cin>>name;
			cout<<"Enter the number of runs, fours and sixes : "<<endl;
			cin>>runs>>fours>>sixes;
		   
		}
		void displaydata()
		{

            cout<<"Name of the batsman: "<<name<<endl;
			cout<<"Number of runs, fours and sixes : "<<runs<<", "<<fours<<" and "<<sixes<<endl;
		  
		}
};
int main()
{
	
    Batsman b[10];
    for(int i=0;i<5;i++)
    {
	b[i].assigndata();
   }
    for(int i=0;i<5;i++)
    {
	b[i].displaydata();
    }
	return 0;
}

