#include<iostream.h>
#include<conio.h>
struct student
{
	char name[30];
	int id;
	int m1,m2,m3,total;
	float average;


}s;
void main()
{
	clrscr();
	struct student s;
	cout<<"\nEnter student name:- ";
	cin>>s.name;
	cout<<"\nEnter student id number:- ";
	cin>>s.id;
	cout<<"\nEnter marks of m1,m2,m3:- ";
	cin>>s.m1>>s.m2>>s.m3;

s.total=s.m1+s.m2+s.m3;
s.average=s.total/3;
	cout<<"\nStudent name:- "<<s.name;
	cout<<"\nStudent id number;- "<<s.id;
	cout<<"\nStudent m1,m2,m3 marks:- "<<endl<<s.m1<<endl<<s.m2<<endl<<s.m3;
	cout<<"\nStudent total marks:- "<<s.total;
	cout<<"\nStudent average marks- "<<s.average;
    getch();
}



