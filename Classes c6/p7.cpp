#include<iostream>
using namespace std;
class employe{
    private:
    int employe_number;
    float comp;

    public:
    employe():employe_number(0),comp(0){}
    employe(int n,float c):employe_number(n),comp(c){}

    void set()
    {
        cout << "enter the emp no."; cin>>employe_number;
        cout << "enter the comp no."; cin >> comp;
    }
    void display()
    {
        cout << employe_number << endl ;
        cout << comp;
    }
};
int main()
{
   employe e1;
   e1.set();
   e1.display();

}
