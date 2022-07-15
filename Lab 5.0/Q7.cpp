#include<iostream>
using namespace std;
class Student{
	protected:
		char *name;
		int roll;
	public:
		void setStudentData(char *name,int roll)
		{
			this->name = name;
			this->roll=roll;
		}
		void displayStudentData()
		{
			cout<<"Student's Name : "<<name<<endl;
			cout<<"Student's Rollno : "<<roll<<endl;
		}
};
class Marks{
	protected:
	int oop,pm,bc,acc,fin;
	public:
		void setMarks(int oop,int pm,int bc,int acc,int fin)
		{
			this->oop=oop;
			this->pm=pm;
			this->bc=bc;
			this->acc=acc;
			this->fin=fin;
		}
//		void displayTheory()
//		{
//			cout<<"Student's Theory Marks for A Subject : "<<sub1<<endl;
//			cout<<"Student's Theory Marks for B Subject : "<<sub2<<endl;
//		}
};

class Result : public Student, public Marks{
	protected:
		int total;
		float percent;
	public:
		int totalMarks()
		{
			return (oop+pm+bc+acc+fin);
		 } 
		 
		 float percentage()
		 {
		 	return ((totalMarks()*100)/500);
		 }
		void displayResults()
		{
			cout<<"Total Marks of the Student : "<<totalMarks()<<endl;
			cout<<"Percentage of the Student : "<<percentage()<<endl;
		}
};
int main()
{
	int s1,s2,s3,s4,s5;
	cout<<"Enter the marks of : "<<endl;
	cout<<"OOP"<<endl;
	cin>>s1;
	cout<<"PM"<<endl;
	cin>>s2;
	cout<<"BC"<<endl;
	cin>>s3;
	cout<<"ACC"<<endl;
	cin>>s4;
	cout<<"FIN"<<endl;
	cin>>s5;
	Result r;
	r.setStudentData("Aayush",2);
	r.displayStudentData();
	r.setMarks(s1,s2,s3,s4,s5);
	r.totalMarks();
	r.percentage();
	r.displayResults();
	return 0;
}
