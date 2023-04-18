#include<iostream>
using namespace std;
double power (double n,int p)
{
	double powe=1;
	for(int i=p;i>0;i--)
	{
		powe *= n;
		
	}
	return powe;
}
int  main()
{
	double n;
	int p;
	cout <<"enter the value of n and p"<<endl;
	cin>>n>>p;
	
	double result=power(n,p);
	cout <<"The power["<<n<<"^"<<p<<"]="<<result<<endl;
}
