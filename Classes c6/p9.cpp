//inheritance
#include<iostream>
using namespace std;
class counter{
    protected:
    unsigned int count;

    public:
    counter():count(0){}
    counter(int c):count(c){}

    int getcount()
    {
        return count;
    }
    counter operator ++()
    {
        return counter(++count);
    }
};
class countdn:public counter  //derived class
{
    public:
    countdn():counter(0){}
    countdn(int c):counter(c){}

    counter operator -- ()
    {
        return counter(--count);
    }
};
int main()
{
    countdn c1(100);
    cout << "c1=" << c1.getcount()<< endl;

    ++c1;
    ++c1;
    cout << "c1=" << c1.getcount()<< endl; 

    --c1;

     cout << "c1=" << c1.getcount()<< endl;



    
}