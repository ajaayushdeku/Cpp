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
		void displayRoll()
		{
			cout<<"Student's Rollno : "<<roll<<endl;
		}
};
class Theory : virtual public Student{
	protected:
	int sub1,sub2;
	public:
		void setTheory(int sub1,int sub2)
		{
			this->sub1=sub1;
			this->sub2=sub2;
		}
		void displayTheory()
		{
			cout<<"Student's Theory Marks for A Subject : "<<sub1<<endl;
			cout<<"Student's Theory Marks for B Subject : "<<sub2<<endl;
		}
};
class Practical : virtual public Student {
	protected:
	int prac1,prac2;
	public:
		void setPractical(int prac1,int prac2)
		{
			this->prac1=prac1;
			this->prac2=prac2;
		}
		void displayTheory()
		{
			cout<<"Student's Practical Marks for A Subject : "<<prac1<<endl;
			cout<<"Student's Practical Marks for B Subject : "<<prac2<<endl;
		}
};

class Result : public Theory, public Practical{
	protected:
		int total;
	public:
		void totalMarks()
		{
			total=sub1+prac1+sub2+prac2;
			cout<<"Final Total Marks of the Student : "<<total<<endl;
		}
};
int main()
{
	Result r;
	r.setRoll(2);
	r.setTheory(78,89);
	r.setPractical(20,25);
	r.totalMarks();
	return 0;
}
