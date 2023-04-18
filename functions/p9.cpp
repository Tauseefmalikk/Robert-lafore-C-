#include<iostream>
using namespace std;
void order(int& num1,int& num2)
{
    if(num1>num2)
    {
        int temp=num1;
        num1=num2;
        num2=temp;
    }
}
int main()
{
    int n1,n2,n3,n4,n5,n6,n7,n8;
    cout <<"enter the value of n1,n2,n3,n4,n5,n6,n7" << endl;cin>>n1>>n2>>n3>>n4>>n5>>n6>>n7>>n8;
    order(n1,n2);
    order(n3,n4);
    order(n5,n6);
    order(n7,n8);
    cout << "the reordered pair is =("<<n1<<","<<n2<<")"<< endl;
    cout << "the reordered pair is =("<<n3<<","<<n4<<")"<< endl;
    cout << "the reordered pair is =("<<n5<<","<<n6<<")"<< endl;
    cout << "the reordered pair is =("<<n7<<","<<n8<<")"<< endl;
    

}