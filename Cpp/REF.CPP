#include<iostream.h>
#include<conio.h>
void main()
{
	int a=10,&ref=a;
	clrscr();
	cout<<"\n A:"<<a;
	cout<<"\nrefrence:"<<ref;
	a=20;
	cout<<"\n A:"<<a;
	cout<<"\nrefrence:"<<ref;
	a=30;
	cout<<"\n A:"<<a;
	cout<<"\nrefrence:"<<ref;
	a=40;
	cout<<"\n A:"<<a;
	cout<<"\nrefrence:"<<ref;
	a=50;
	cout<<"\n A:"<<a;
	cout<<"\nrefrence:"<<ref;
	getch();
}