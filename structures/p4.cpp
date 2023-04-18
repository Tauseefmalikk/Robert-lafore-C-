#include<iostream>
using namespace std;
struct point{
    int x,y;
};
int main()
{
    point p1,p2,sum;
    cout << "enter the coordinates of point p1" << endl;\
    cout << "enter the x coordinate"; cin >> p1.x;
    cout << "enter the y coordinate"; cin >> p1.y;

    cout << "enter the coordiantes of p2" << endl;
    cout << "enter the x coordinate"; cin >> p2.x;
    cout << "enter the y coordinate"; cin >> p2.y;

    sum.x=p1.x+p2.x;
    sum.y=p1.y+p2.y;

    cout << "The sum of two points=(" <<sum.x<<","<< sum.y<<")" << endl; 
}