#include<iostream>
using namespace std;
struct data
{
	string name,parentage,rollno,course,batch,contact,password,loginid;
}a1[20],p1,p2;
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
       	cout <<"\nenter data of student" <<i+1<<""<<endl<<endl;
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
			cout <<i+1<<"]"<<"\t"<< a1[i].name<<"\t\t"<<a1[i].parentage<<"\t\t\t"<<a1[i].rollno<<"\t\t"<<a1[i].course<<"\t\t"<<a1[i].batch<<"\t\t"<<a1[i].contact<<endl;
		}
	
	}

	
}
void update()
{
	string r,e;
	int z=1;
	int i;
	cout <<"enter the rollno. of student you want to update"<<endl;
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
		int update;
	 cout <<"press 1 to update name"<<endl;
	 cout <<"press 2 to update parentage"<<endl;
	 cout <<"press 3 to update rollno."<<endl;
	 cout <<"press 4 to update course"<<endl;
	 cout <<"press 5 to update batch"<<endl;
	 cout <<"press 6 to update contact"<<endl;
	 cin >> update;
	 cout <<endl<<endl;
	 
	 switch(update)
	 {
	 	case 1:
	 		cout <<"enter new name to be updated"<<endl;
	 		{
	 			for(int i=0;i<total;i++)
	 			cin>>a1[i].name;
	 			break;
			 }
	    case 2:
	 		cout <<"enter new parentage to be updated"<<endl;
	 		{
	 			for(int i=0;i<total;i++)
	 			cin>>a1[i].parentage;
	 			break;
			 }
	    case 3:
	 		cout <<"enter new rollno. to be updated"<<endl;
	 		{
	 			for(int i=0;i<total;i++)
	 			cin>>a1[i].rollno;
	 			break;
			 }
	 	case 4:
	 		cout <<"enter new course to be updated"<<endl;
	 		{
	 			for(int i=0;i<total;i++)
	 			cin>>a1[i].course;
	 			break;
			 }
		case 5:
	 		cout <<"enter new batch to be updated"<<endl;
	 		{
	 			for(int i=0;i<total;i++)
	 			cin>>a1[i].batch;
	 			break;
			 }	 
		case 6:
	 		cout <<"enter new contact to be updated"<<endl;
	 		{
	 			for(int i=0;i<total;i++)
	 			cin>>a1[i].contact;
	 			break;
			 }
	    default:
	    	cout <<"invalid input"<<endl;		
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
	int d;
	cout <<"Enter 1 to delete all records "<<endl;
	
	if(d==1)
	{
		total=0;
		cout <<"All record deleted successfully"<<endl;
	
	}
	
}
void changelogindetails()
{
	int change;
	string oldlid,newlid,t,lid="tauseefmalik8q@gmail.com";
	int oldp,newp,t2,i,p=9692;
	
	cout <<"Enter 1 to change login id"<<endl;
	cout <<"Enter 2 to change password"<<endl;
	cin >>change;
	cout <<endl<<endl;
	
	switch(change)
	{
		case 1:
			cout <<"Enter your old login id"<<endl;
			cin>>oldlid;
			if(oldlid==lid)
			{
				cout <<"Enter your new login id:";
				cin>>newlid;
				
			    t=newlid;
			    oldlid=newlid;
			    oldlid=t;
			
			cout<<endl<<endl;
			cout<<"Id Changed Successfully";
		
		case 2:
			cout <<"Enter your old paasword"<<endl;
			cin>>oldp;
			if(oldp==p)
			{
				cout <<"enter your new password"<<endl;
				for(i=0;i<1;i++)
				cin>>p2.password;
				cout<<endl<<endl;
				cout <<"Password Changed Successfully";
			}
			else
			{
				cout <<"Old Password Doesn't Match...Try again!!"<<endl;
			
			}
			
			
			cout<<endl<<endl;
			
			int value;
	while (true && value!=6)
	{
		cout <<"Press 1 to enter data"<<endl;
		cout <<"Press 2 to show data"<<endl;
		cout <<"Press 3 to search data"<<endl;
		cout <<"Press 4 to update data"<<endl;
		cout <<"Press 5 to delete data"<<endl;
		cout <<"Press 6 to change login details"<<endl;
		cout <<"Press 7 to exit"<<endl;
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
		        changelogindetails();
			    break;	
			case 7:
		         cout <<endl<<endl;
				cout<<"You Have been Successfully Logged Out"<<endl;
				exit(0);
				break;	
			default:
				cout <<"invalid input"<<endl;
				break;
		}
	}

			
			    break;
			
			}
			else
			{
				cout <<"Old Login Id Doesnt Match"<<endl;
			}
			
	}
	
	
}
int main()
{
	struct data p1;
	int p1=9692;
	string lid="tauseefmalik8q@gmail.com";
	
	cout<<"                                           -----------Welcome To My Student Data Management System-----------"<<endl<<endl<<endl;                                                      
	
	
	cout <<"Enter your Login id:"<<endl<<endl;
	cin >>lid;
	cout <<"Enter your Password:"<<endl<<endl;
	cin >>p1.password;
	cout<<endl;
	
	if(p1.password==9692 && lid=="tauseefmalik8q@gmail.com")
	{
	int value;
	while (true && value!=6)
	{
		cout <<"Press 1 to enter data"<<endl;
		cout <<"Press 2 to show data"<<endl;
		cout <<"Press 3 to search data"<<endl;
		cout <<"Press 4 to update data"<<endl;
		cout <<"Press 5 to delete data"<<endl;
		cout <<"Press 6 to change login details"<<endl;
		cout <<"Press 7 to exit"<<endl;
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
		        changelogindetails();
			    break;	
			case 7:
		         cout <<endl<<endl;
				cout<<"You Have been Successfully Logged Out"<<endl;
				exit(0);
				break;	
			default:
				cout <<"invalid input"<<endl;
				break;
		}
	}
}
else
{
	 if(lid!="tauseefmalik8q@gmail.com" && p!=9692)
	{
		cout <<"Invalid login id/password!!"<<endl<<endl;
		
		cout<<"--ONE MORE ATTEMPT LEFT--"<<endl<<endl;
		cout <<"Enter your login details again"<<endl<<endl;
		
		cout <<"enter your login id:"<<endl<<endl;
       	cin >>lid;
       	
     	cout <<"enter your password:"<<endl<<endl;
     	cin >>p;
     	cout<<endl;
     	
     	if(p==9692 && lid=="tauseefmalik8q@gmail.com")
     	{
	    int value;
       	while (true)
       	
    	{
		cout <<"Press 1 to enter data"<<endl;
		cout <<"Press 2 to show data"<<endl;
		cout <<"Press 3 to search data"<<endl;
		cout <<"Press 4 to update data"<<endl;
		cout <<"Press 5 to delete data"<<endl;
		cout <<"Press 6 to change login details"<<endl;
		cout <<"Press 7 to exit"<<endl;
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
				changelogindetails();
				break;
			case 7:
				exit(0);
				break;	
			default:
				cout <<"invalid input"<<endl;
				break;
		}
	}
}
else
{
	cout <<"Invalid input again...You have been blocked...Try gain after 24hrs"<<endl;
}
		
		
		
	}
}
	
}
