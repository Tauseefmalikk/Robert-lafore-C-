#include<iostream>
using namespace std;
unsigned long fact(unsigned long n)
{
    int f=1;
    for(int i=n;i>0;i--)
    {
        f=f*i;
    }
    return f;

}
int main()
{
    int n;
    cout <<"enter the value of n" << endl;cin>>n;
    cout <<"The factorial of" <<n<<"="<<fact(n);
} 