#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[10],even=0,odd=0;
	for(int i=0;i<10;i++)
	{
		cout<<"Enter Value "<<i+1<<" : ";
		cin>>a[i];
	}
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		{
			even=even+a[i];
		}
		else
		{
			odd=odd+a[i];
		}

	}
	cout<<"values is print odd sum :"<<odd;
	cout<<"\nvalues is print even sum :"<<even;
	getch();
}