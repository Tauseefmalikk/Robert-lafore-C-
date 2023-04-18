#include<iostream>
using namespace std;
class complex{
    public:
    int real;
    int imaginary;
    
    complex()
    {
        real=0;
        imaginary=0;
    }
    complex(int r,int i):real(r),imaginary(i){}

    complex set()
    {
        cout << "enter the first complex number" << endl;
        cin >> real >> imaginary;
        cout << "enter the second complex number" << endl;
        cin >> real >> imaginary;
    }


    complex add(complex c1,complex c2)
    {
        complex res;
        res.real=c1.real+c2.real;
        res.imaginary=c1.imaginary+c2.imaginary;
        return res;
    }
};
int main()
{
    complex c1(4,6);
    cout << "first complex numbers=" << c1.real << " + i" << c1.imaginary << endl;
    complex c2(5,6);
    cout << "second complex numbers=" << c1.real << " + i" << c1.imaginary << endl;


        complex c3=c3.add(c1,c2);
        cout << "The sum of 2 complex numbers=" << c3.real << " + i" << c3.imaginary << endl;
}