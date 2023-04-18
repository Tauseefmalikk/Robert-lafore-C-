//inheritance
#include<iostream>
using namespace std;
class publications{
    private:
    string title;
    float price;

    public:
    void setdata()
    {
        cout << "enter the title" << endl;cin >> title;
        cout << "enter the price" << endl;cin >> price;

    }
    void showdata()
    {
        cout << "Title:" << title << endl;
        cout << "price:" << price << endl; 
    }
};
class book:public publications{
    private:
    int pages;
    public:
    void setdata()
    {
        publications::setdata();
        cout << "Enter the number of pages" << endl;cin >> pages;
    }
    void showdata()
    {
        publications::showdata();
        cout <<"pages=" << pages << endl;
    }


};
class tape:public publications{
    private:
    float time;
    public:
    void setdata()
    {
        publications::setdata();
        cout << "Enter the playing time=" << endl; cin >> time;

    }
    void showdata()
    {
        publications::showdata();
        cout << "The total playing time=" << time << endl;
    }
};
class disk:public publications{
    private:
    enum cdordisk{c,d};
    cdordisk type;
    public:
    void setdata()
    {
        publications::setdata();
        {
            cout << "enter c for cd and d for disk" << endl;
            
        }
    }
    void showdata()
    {
        publications::showdata();
        cdordisk type;
        if(cdordisk type=c)
        {
            cout << "Your type is cd" << endl;
        }
        else 
        {
            cout << "Your type is disk" << endl;
        }
    }

};
int main()
    {
        
      
        disk d1;
        d1.setdata();
        d1.showdata();
    }