#include<iostream>
using namespace std;
unsigned long hms_to_secs(int hours,int minutes,int seconds)
{
    return (hours*60*60)+(minutes*60)+seconds;
}
int main()
{   char ch;
    int h,m,s,n;

    do{
    cout << "Enter the value of h"; cin>>h;
    cout << "Enter the value of m"; cin >> m;
    cout << "Enter the value of s"; cin >> s;
    cout << "The time in seconds=" << hms_to_secs(h,m,s) << endl;

    cout <<"do you want to continue(y/n)" << endl;
    cin >> ch;
    }
    while(ch=='y');
    cout <<"\nsee you agian" << endl;




}