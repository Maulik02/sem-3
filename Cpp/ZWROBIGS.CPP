#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a;
	cout<<"\n\tEnter Value:";
	cin>>a;
	if(a>0)
	{
		cout<<"\n\t A is positive";
	}
	else if(a==0)
	{
		cout<<"\n\t A is Zero";
	}
	else
	{
		cout<<"\n\t A is nagetive";
	}
	getch();
}