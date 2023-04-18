#include <iostream>
using namespace std;
float cirarea(float radius)
{
	return 3.14*radius*radius;
}
int main()
{
	float radius;
	cout <<"enter the radius of circle"<<endl;
	cin >> radius;
	
	float result=cirarea(radius);
	cout <<"the radius of circle ="<<result<<endl;
}
