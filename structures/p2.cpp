#include<iostream>
using namespace std;
struct Employe
{
	int id;
	char name[20];
	
	struct Date
	{
		int dd;
		int mm;
		int yyyy;
	}doj;
	
}a[500];

int main()
{
	int n,i;
	cout <<"enter total working employes in company" <<endl;
	cin >>n;
	
	for(i=0;i<n;i++)
	{
		cout <<"enter the employe id of "<<i+1<<" employe" <<endl;
	    cin >> a[i].id;
	    
	
	    cout <<"enter the name of employe "<<i+1<<""<<endl;
		cin >> a[i].name;
	    
	    cout <<"enter the date of joining of "<<i+1<<" employe (dd-mm-yyyy)"<<endl;
		cin >> a[i].doj.dd;
		cin >> a[i].doj.mm;
		cin >> a[i].doj.yyyy;
	    
	}
	
	cout <<endl<<endl;
	cout << "\tid\tname\t\tdate of joining\n" <<endl;
	for(i=0;i<n;i++)
    {
    	cout <<i+1<<":"<<"\t"<<a[i].id<<"\t"<<a[i].name<<"\t\t"<<a[i].doj.dd<<"-"<<a[i].doj.mm<<"-"<<a[i].doj.yyyy <<endl;
	}
	
}
