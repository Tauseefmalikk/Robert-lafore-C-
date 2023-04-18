#include<iostream>
using namespace std;
struct employe{

    int number;
    string name;
    int compensation;

   
}a1[20];
int main()
{
    int n,i;
    cout << "enter the total number of employes working"; cin >> n;
   for(i=0;i<n;i++)
   {
    cout << "enter the emp number of"<<i<< "employe"; cin >> a1[i].number;
    cout << "enter the name of" << i << "employe"; cin >> a1[i].name;
    cout << "enter the compensation of " << i << "employe"; cin >> a1[i].compensation;
   }

   
    cout << "employe number\t name\t compensation" << endl;
   for(i=0;i<n;i++)
   {
    cout << a1[i].number <<"\t"<<a1[i].name<<"\t"<< a1[i].compensation << endl;
   }
}

