#include<iostream>
using namespace std;
class time{
    private:
    int hours;
    int minutes;
    int seconds;

    public:
    time():hours(0),minutes(0),seconds(0){}
    time(int h,int m,int s):hours(h),minutes(m),seconds(s){}

    void display()
    {
        cout << hours <<":" << minutes <<":" << seconds << ":" << endl;
    }

    void set()
    {
        cout << "enter the first time" << endl;
        cin >> hours >> minutes >> seconds;
        cout << "enter the second time" << endl;
        cin >> hours >> minutes >> seconds;
    }
    void add(time t1,time t2)
    {
        seconds=t1.seconds+t2.seconds;
        if(seconds>59)
        {
            seconds-=60;
            minutes++;
        }
        minutes=t1.minutes+t2.minutes;
        if(minutes>59)
        {
            minutes-=60;
            hours++;
        }
        hours=t1.hours+t2.hours;
    }
};
int main()
{
    time t1(2,43,1);
    time t2(1,55,33);
    time t3;
    t3.add(t1,t2);

    cout << "sum of";
    t1.display();
    t2.display();
    cout << "is=";
    t3.display();

}