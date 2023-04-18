//inheritance
#include<iostream>
using namespace std;
class employee{

    private:
    char name[50];
    int number;

    public:

    void setdata()
    {
        cout << "enter the name" << endl; cin >>name;
        cout << "enter the number" << endl; cin >> number;

    }
    void showdata()
    {
        cout << "name=" << name << endl;
        cout << "number" << number << endl;   
    }
};
    class manager:public employee
    {
        private:
        char title[50];
        double dues;

        public:
         
        void setdata()
        {
            employee::setdata();
            cout << "enter title" << endl; cin >> title;
            cout << "enter the dues" << endl; cin>> dues;

        }
        void showdata()
        {
            employee::showdata();
            cout << "title:" << title<< endl;
            cout << "dues:" << dues << endl; 
        }

    };
    class scientist:public employee
    {
        private:
        int pubs;
        public:
        void setdata()
        {
            employee::setdata();
            cout << "enter the number of publications" << endl; cin >> pubs;

        }
        void showdata()
        {
            employee::showdata();
            cout << "publications:" << pubs << endl;
        }
    };
    int main()
    {
        scientist m1;
        m1.setdata();
        m1.showdata();
    }



