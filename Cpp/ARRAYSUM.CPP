#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[10],to=0;
	for(int i=1;i<=10;i++)
	{
		cout<<"Enter Value :";
		cin>>a[i];

	}
	for(i=1;i<=10;i++)
	{
		cout<<"\n\n\t"<<a[i];
		to+=a[i];
	}

	cout<<"\n\n\tTotal:"<<to;
	getch();
}