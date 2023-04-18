#include<iostream>
using namespace std;
void zerosmaller(int& a,int& b)
{
    if(a<b)
    {
        a=0;
    }
    else
    {
        b=0;
    }
}
int main()
{
    int a,b;
    cout << "enter the value of a" << endl; cin>>a;
    cout << "enter the value of b" << endl; cin >> b;

    zerosmaller(a,b);
    cout << "a=" << a << "b=" << b << endl;
    
}