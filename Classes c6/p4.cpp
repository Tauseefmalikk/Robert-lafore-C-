//Print the average of three numbers entered by the user by creating a class named 'Average' having a function to calculate and print 
//the average without creating any object of the Average class.
#include<iostream>
using namespace std;
class average{
    private:
    int a,b,c;
    public:
    average()=default;
    average(int x,int y,int z):a(x),b(y),c(z){}
    void set()
    {
        cout << "Enter the 3 numbers" << endl;
        cin >> a >> b >> c;
    }
    int get()
    {
        return (a+b+c)/3;
    }
};
int main()
{
    average a1;
    a1.set();
    cout << "the average of a1=" << a1.get() << endl;
    average a2(1,2,4);
    cout << "the average of a2=" << a2.get() << endl;




}