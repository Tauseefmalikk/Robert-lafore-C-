#include<iostream>
using namespace std;
class student{
    private:
    string name;
    int roll_no;

    public:
    student()=default;
    student(string n,int r):name(n),roll_no(r){}
     
     void get()
     {
        cout << "Enter name" << endl; cin >> name;
        cout << "Enter roll no." << endl; cin >> roll_no;
     }
    void show()
    {
        cout << "The name of student is:" << name << endl;
        cout << "The roll no. is:" << roll_no << endl;

    }

};
int main()
{
    student s1;
    student s2;
    
    s2.get();
    s2.show();
    
}