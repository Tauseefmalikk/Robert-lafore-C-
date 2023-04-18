#include<iostream>
using namespace std;
int distance(int d1,int d2)
{
    if(d1>d2)
    {
        cout << "the d1 is largest=" << d1 << endl;
    }
    else 
    {
        cout << "the d2 is largest=" << d2 << endl;
    }
}
int main()
{
    int d1,d2;
    cout << "enter the first distance" << endl;
    cin >> d1;
    cout << "enter the second distance" << endl;
    cin >> d2;
    distance(d1,d2);
   
}