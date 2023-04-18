#include<iostream>
using namespace std;
struct Distance{
    int feet;
    int inches;
};
Distance add(Distance d1,Distance d2)
{
    Distance d3;
    d3.feet=d1.feet+d2.feet;
    d3.inches=d1.inches+d2.inches;
    if(d3.inches>12)
    {
        d3.inches-=12;
        d3.feet++;
        return d3;
    }
void display(Distance d);
{
    cout << d.feet <<"'"<< d.inches<<"''"<< endl;
}
}
int main()
{
    Distance d1,d2,d3;
    cout << "enter the feet for first distance"<< endl; cin >> d1.feet;
    cout << "enter the inches for first distance"<< endl; cin >> d2.inches;

    cout << "enter the feet for second distance" << endl; cin >> d2.feet;
    cout << "enter the inches for second distance"<< endl; cin >> d2.inches;

    d3=add(d1,d2);
     display(d3);
}