#include<iostream>
using namespace std;
double power(double,int);
char power(char,int);
int power(int,int);
long power(long,int);
float power(float,int);

int main()
{
    int d,c,i,l,f;
    int p1,p2,p3,p4,p5;

    cout << "enter the value of d for double";cin >>d;
    cout << "enter the value of p1";cin>>p1;
    cout << "The power of" << d <<"="<<power(d,p1)<< endl;

    cout << "enter the value of c for char";cin >>c;
    cout << "enter the value of p2";cin>>p2;
    cout << "The power of" << c <<"="<<power(c,p2)<< endl;

}
double power(double d,int p1)
{
    double power=1;
    for(int i=1;i<=p1;i++)
    power*=d;
    return power;
}
char power(char c,int p2)
{
    char power=1;
    for(int i=1;i<p2;i++)
    power*=c;
    return power;
}
int power(int i,int p3)
{
    double power=1;
    for(int j=1;i<p3;i++)
    power*=i;
    return power;
}
long power(long l,int p4)
{
    double power=1;
    for(int i=1;i<p4;i++)
    power*=l;
    return power;
}
float power(float f,int p5)
{
    double power=1;
    for(int i=1;i<p5;i++)
    power*=f;
    return power;
}