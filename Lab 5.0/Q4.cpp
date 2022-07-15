#include<iostream>
using namespace std;
class Sport;
class Student{
	protected:
	int roll_no;
	public:
		void setRoll(int roll_no)
		{
			this->roll_no=roll_no;
		}
		void displayRoll()
		{
			cout<<"Student's Rollno : "<<roll_no<<endl;
		}
};
class Test :public Student{
	protected:
	int sub1,sub2;
	public:
		void setSub(int sub1,int sub2)
		{
			this->sub1=sub1;
			this->sub2=sub2;
		}
		void displaySubject()
		{
			cout<<"Subject 1's Marks : "<<sub1<<endl;
			cout<<"Subject 2's Marks : "<<sub2<<endl;
		}
};
class Sport{
	protected:
	int score;
	public:
		void setScore(int score)
		{
			this->score=score;
		}
		void displayScore()
		{
			cout<<"Sport's Score : "<<score<<endl;
		}
};
class Result : public Test,public Sport {
	protected:
		int total;
		public:
			void displayData()
			{
				total=sub1+sub2;
				cout<<"Total Marks : "<<total<<endl;
				cout<<"Sport's Score : "<<score<<endl;
			}
};
int main()
{
	Result r;
	r.setRoll(2);
	r.displayRoll();
	r.setSub(78,89);
	r.displaySubject();
	r.setScore(15);
	r.displayScore();
	r.displayData();
	return 0;
}
