#include<iostream>
using namespace std;
struct Distance{
    int feet;
    int inches;
};
void display(Distance d)
{
  cout << d.feet <<"'-"<< d.inches<<"''" << endl;
}
int main() 
{
    Distance d1,d2;
    cout << "enter feet for first distance" << endl;
    cin >> d1.feet;
    cout << "enter inches for first distance" << endl;
    cin >> d1.inches;
     
    cout << "enter feet for second distance" << endl;
    cin >> d2.feet;
    cout << "enter inches for second distance" << endl;
    cin >> d2.inches;

    cout << "distance d1=";
    display(d1);
    cout << "distance d2=";
    display(d2);
}