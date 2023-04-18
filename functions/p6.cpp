#include<iostream>
using namespace std;
double power(double n,int p)
{
    for(int i=1;i=p;i++)
    {
        double p=i*n;
        return p;
    }

}
int main()
{
    double n;
    int p;
    cout << "enter the value of n" << endl; cin >> n;
    cout << "enter the value of p" << endl; cin >> p;
    power(n,p);
    cout << "the value of" << "[" <<n<< "]" << "^" "[" <<p<< "]=" << power(n,p) << endl;
}