#include<iostream>
using namespace std;
struct phone{
    int areacode;
    int exchange;
    int number;

};
int main()
{
    phone phone1,phone2;

    phone1.areacode=212;
    phone1.exchange=23;
    phone1.number=89000;

    cout << "enter your phone number" << endl;
    cin>>phone2.areacode>>phone2.exchange>>phone2.number;

    cout << "my number is("<<phone1.areacode<<")" << phone1.exchange<<"-"<< phone1.number<< endl;
    cout <<"your number is("<<phone1.areacode<<")" << phone1.exchange<<"-"<< phone1.number<< endl;
}