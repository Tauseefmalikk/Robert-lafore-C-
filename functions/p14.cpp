#include <iostream>
using namespace std;
int time_to_sec(int h,int m,int s)
{
	int t;
	t= ((h*60*60)+(m*60)+s);
	return t;
}
int main()
{
	int h,m,s;
	cout <<"Enter the value of h,m,s"<<endl;
	cin>>h>>m>>s;
	
	int time=(h,m,s);
	cout<<"The time ="<<time<<endl;
	return 0;
}
