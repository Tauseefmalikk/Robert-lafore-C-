#include<iostream>
using namespace std;
float Cirarea(float radius)
{
    return 3.14*radius*radius;
}
int main()
{
    float r;
    cout << "enter the radius of circle" << endl;
    cin >> r;
    Cirarea(r);
    cout << "the radius=" << Cirarea(r) << endl;
}