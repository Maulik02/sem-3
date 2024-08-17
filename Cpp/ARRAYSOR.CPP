
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[9],terp,j,to;
	for(int i=0;i<=9;i++)
	{
		cout<<"Enter Value :";
		cin>>a[i];

	}
	for(i=0;i<9;i++)
	{
		for(j=0;j<10;j++)
		{
			if(a[j]>a[j+1])
			{
				terp=a[j];
				a[j]=a[j+1];
				a[j+1]=terp;
			}
		}
	}
	cout<<"\n\tAfter Sorting...";
	for(i=0;i<9;i++)
	{
		cout<<"\n\t"<<a[i];
	}
	for(i=0;i<9;i++)
	{
		cout<<"\n\n\t"<<a[i];
		to+=a[i];
	}
	cout<<"\n\n\tTotal:"<<to;
	getch();
}