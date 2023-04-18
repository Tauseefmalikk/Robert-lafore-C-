#include<iostream>
using namespace std;
class date{
    private:
    int month;
    int day;
    int year;

    public:
    date():month(0),day(0),year(0){}
    date(int m,int d,int y):month(m),day(d),year(y){}

    void setdate()
    {
        cout << "enter the month"; cin >> month;
        cout << "enter the day"; cin >> day;
        cout << "enter the year"; cin >> year;

    }
    void showdate()
    {
        cout << month <<"/" << day << "/" << year ;
    }
};

int main()
{
    date d1;
    d1.setdate();
    d1.showdate();
    


}