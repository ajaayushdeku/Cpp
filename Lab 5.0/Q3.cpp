#include<iostream>
using namespace std;
class Student{
	protected:
	int roll;
	public:
		void setRoll(int roll )
		{
			this->roll=roll;
		}
};
class Test : public Student{
	protected:
	int sub1,sub2;
	public:
		void setSub(int sub1,int sub2)
		{
			this->sub1=sub1;
			this->sub2=sub2;
		}
};
class Result : public Test {
	protected:
		int total;
		public:
			void displayData()
			{
				total=sub1+sub2;
				cout<<"Student's Rollno : "<<roll<<endl;
				cout<<"Subject 1's Marks : "<<sub1<<endl;
				cout<<"Subject 2's Marks : "<<sub2<<endl;
				cout<<"Total Marks : "<<total<<endl;
			}
};
int main()
{
	Result r;
	r.setRoll(2);
	r.setSub(78,89);
	r.displayData();
	return 0;
}
