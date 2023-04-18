#include<iostream>
using namespace std;
struct data
{
	string name,parentage,rollno,course,batch,contact;
}a1[20];
int total=0;
void enter()
{
	int n,i;
	cout <<"enter number of students you want to enter"<<endl;
	cin >> n;
	if(total==0)
	{
	total=total+n;
	for(i=0;i<n;i++)
	{
		cout <<"\nenter data of student"<<i+1<<""<<endl<<endl;
		cout <<"Enter name of student:";
		cin >> a1[i].name;
		cout <<"Enter parentage:";
		cin >>a1[i].parentage;
		cout <<"Enter roll no.:";
		cin >> a1[i].rollno;
		cout <<"Enter course:";
		cin >> a1[i].course;
		cout <<"enter batch:";
		cin >>a1[i].batch;
		cout <<"enter contact:";
		cin >> a1[i].contact;
		
	}
    }
    else
    {
    	for(i=total;i<n+total;i++)
    	
    {
       	cout <<"\nenter data of student"<<i+1<<""<<endl<<endl;
		cout <<"Enter name of student:"<<endl;
		cin >> a1[i].name;
		cout <<"Enter parentage:"<<endl;
		cin >>a1[i].parentage;
		cout <<"Enter roll no.:"<<endl;
		cin >> a1[i].rollno;
		cout <<"Enter course:"<<endl;
		cin >> a1[i].course;
		cout <<"enter batch:"<<endl;
		cin >>a1[i].batch;
		cout <<"enter contact:"<<endl;
		cin >> a1[i].contact;
	}
	total=total+n;
	}
} 
void show()
{
	cout <<"\t""Name"<<"\t\t"<<"parentage"<<"\t\t"<<"Rollno."<<"\t\t"<<"Course"<<"\t\t"<<"Batch"<<"\t\t"<<"Contact"<<"\t\t"<<""<<endl;
	for(int i=0;i<total;i++)
	{
		cout <<i+1<<"]"<<"\t"<< a1[i].name<<"\t\t"<<a1[i].parentage<<"\t\t\t"<<a1[i].rollno<<"\t\t"<<a1[i].course<<"\t\t"<<a1[i].batch<<"\t\t"<<a1[i].contact<<endl;
	}
}
void search()
{
	string r;
	int i;
	cout <<"enter the rollno. of student you want to search"<<endl;
	cin >> r;
	cout <<"\t"<<"Name"<<"\t\t"<<"parentage"<<"\t\t"<<"Rollno."<<"\t\t"<<"Course"<<"\t\t"<<"Batch"<<"\t\t"<<"Contact"<<"\t\t"<<""<<endl;
	for(i=0;i<total;i++)
	{
		if(r==a1[i].rollno)
		{
			cout <<i<<")"<<"\t"<< a1[i].name<<"\t\t"<<a1[i].parentage<<"\t\t\t"<<a1[i].rollno<<"\t\t"<<a1[i].course<<"\t\t"<<a1[i].batch<<"\t\t"<<a1[i].contact<<endl;
		}
	
	}

	
}
void update()
{
	string r,e;
	int z=1;
	int i;
	cout <<"enter the rollno. of student you want to search"<<endl;
	cin >> r;
	cout<<endl;
	cout <<"-----reorded data-----"<<endl;
	
	cout <<"\t"<<"Name"<<"\t\t"<<"parentage"<<"\t\t"<<"Rollno."<<"\t\t"<<"Course"<<"\t\t"<<"Batch"<<"\t\t"<<"Contact"<<"\t\t"<<""<<endl;
	for(i=0;i<total;i++)
	{
		if(r==a1[i].rollno)
		{
			cout<<i+1<<"]"<<"\t"<< a1[i].name<<"\t\t"<<a1[i].parentage<<"\t\t\t"<<a1[i].rollno<<"\t\t"<<a1[i].course<<"\t\t"<<a1[i].batch<<"\t\t"<<a1[i].contact<<endl;
		}
	
	}
	cout <<endl;
	cout <<"enter '1' to edit your data"<<endl;
	cin >> z;
	if(z==1)
	{
		for(i=0;i<total;i++)
	{
		cout <<"\nenter data of student"<<i+1<<""<<endl<<endl;
		cout <<"Enter name of student:";
		cin >> a1[i].name;
		cout <<"Enter parentage:"<<;
		cin >>a1[i].parentage;
		cout <<"Enter roll no.:";
		cin >> a1[i].rollno;
		cout <<"Enter course:";
		cin >> a1[i].course;
		cout <<"enter batch:";
		cin >>a1[i].batch;
		cout <<"enter contact:";
		cin >> a1[i].contact;
		
	}
	}
	cout <<"--------Your Data Is Updtated Successfully--------";
	cout <<endl<<endl;
	cout <<"\t""Name"<<"\t\t"<<"parentage"<<"\t\t"<<"Rollno."<<"\t\t"<<"Course"<<"\t\t"<<"Batch"<<"\t\t"<<"Contact"<<"\t\t"<<""<<endl;
	for(int i=0;i<total;i++)
	{
		cout <<i+1<<"]"<<"\t"<< a1[i].name<<"\t\t"<<a1[i].parentage<<"\t\t\t"<<a1[i].rollno<<"\t\t"<<a1[i].course<<"\t\t"<<a1[i].batch<<"\t\t"<<a1[i].contact<<endl;
	}
	
}
void deleterecord()
{
	
}
int main()
{
	
	int value;
	while (true)
	{
		cout<<endl<<endl;
		cout <<"Press 1 to enter data"<<endl;
		cout <<"Press 2 to show data"<<endl;
		cout <<"Press 3 to search data"<<endl;
		cout <<"Press 4 to update data"<<endl;
		cout <<"Press 5 to delete data"<<endl;
		cout <<"Press 6 to exit"<<endl;
		cin >> value;
		cout<<endl<<endl;
		
		switch(value)
		{
			case 1:
				enter();
				break;
			case 2:
				show();
				break;
			case 3:
				search();
				break;
			case 4:
				update();
				break;
			case 5:
				deleterecord();
				break;
			case 6:
				exit(0);
				break;	
			default:
				cout <<"invalid input"<<endl;
				break;
		}
	}
	
	
}
