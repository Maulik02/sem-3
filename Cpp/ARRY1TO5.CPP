#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[5];
	for(int i=1;i<=5;i++)
	{
		cout<<"Enter Value :";
		cin>>a[i];
	}
	for(i=1;i<=5;i++)
	{
		cout<<"\n\n\t"<<a[i];
	}
	getch();
}