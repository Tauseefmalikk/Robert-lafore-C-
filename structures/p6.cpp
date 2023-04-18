#include<iostream>
using namespace std;
struct fraction
{
    int num,den;

};
int main()
{
    fraction num1,num2,sum;
    char n;
    do{
        cout << "enter the first fraction"; cin >> num1.num >> num1.den;
        cout << "enter the second fraction"; cin >> num2.num >>num2.den;

        sum.num=num1.num*num2.den+num1.den*num2.num;
        sum.den=num1.den+num2.den;

        cout << num1.num <<"/"<< num1.den<< "+" << num2.num <<"/" << num2.den <<"=" << sum.num <<"/"<< sum.den<< endl;;
        cout << "press y to continue" << endl; cin >> n;
    }while(n=='y');
    {
        cout << "see you again";
    }
  
}    


