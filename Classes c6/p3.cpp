//Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by 
//creating a class named 'Rectangle' with a function named 'Area' which returns the area. Length and 
//breadth are passed as parameters to its constructor.
#include<iostream>
using namespace std;
class rectangle{
    private:
    float a,b;

    public:
    rectangle()=default;
    rectangle(float x,float y):a(x),b(y){}

    void set()
    {
        cout << "Enter the sides of rectangle" << endl;
        cin >> a >> b;
    }
    float area()
    {
        return a*b;
    }
};
int main()
{
    rectangle r1;
    r1.set();
    cout << "the area of rectangle =" << r1.area() << endl;
    rectangle a1(4,5);
    rectangle a2(5,8);
    cout << "the area of rectangle =" << a1.area() << endl;
    cout << "the area of rectangle =" << a2.area() << endl;
}