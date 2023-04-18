#include<iostream>
using namespace std;
void repchar()
{
    for(int i=0;i<45;i++)
    {
        cout <<"*"<< endl;
    }
}
void repchar(char ch)
{
    for(int i=0;i<45;i++)
    {
        cout << ch << endl;
    }
}
void repchar(char ch,int n)
{
    for(int i=0;i<n;i++)
    {
        cout << ch << endl;
    }
}
int main()
{
    char ch;
    int n;
    repchar();
    cout <<"enter the value of ch" << endl;cin>>ch;
    repchar(ch);
    cout <<"enter the value of ch" << endl;cin>>ch;
    cout << "enter the value of n" << endl;cin>>n;
    repchar(ch,n);

}