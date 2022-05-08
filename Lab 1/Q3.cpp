#include<iostream>
using namespace std;
int main(){
	int x,y,i,total;
	cout<<"Enter base : ";
	cin>>x;
	cout<<"Enter power : ";
	cin>>y;
	total = x;
	for(i=1;i<y;i++){
		total = total*x;
	}
	cout<<"The required solution : " << total;
	return 0;
}
