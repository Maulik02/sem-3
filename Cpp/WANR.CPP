#include<iostream.h>
#include<conio.h>
void sum(int,int);
void main()
{
	clrscr();
	int a,b;
	cout<<"Enter value :";
	cin>>a;
	cout<<"\nEnter value :";
	cin>>b;
	sum(a,b);
	getch();
}
void sum(int a,int b)
{
	int ans;
	ans=a+b;
	cout<<"\n\tANS :"<<ans;
}