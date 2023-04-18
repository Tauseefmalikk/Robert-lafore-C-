#include<iostream>
using namespace std;
class Triangle{
    private:
    float a,b,c;
    public:
    Triangle():a(0),b(0),c(0){}
    Triangle(float x,float y,float z):a(x),b(y),c(z){}

    void get()
    {
        cout << "enter the 3 sides of triangle(a,b,c)" << endl;
        cin >> a >> b >> c;
    }
    float area()
    {
        return 0.5*a*b;
        
    }
    float perimeter()
    {
        return a+b+c;
    }

};
int main()
{
    Triangle t(1,2,4);
   cout << t.area() << endl;
   cout << t.perimeter();
}    