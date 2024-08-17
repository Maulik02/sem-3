#include<iostream.h>
#include<conio.h>
int sum();
void main()
{
	clrscr();
	int s;
	s=sum();
	cout<<"\n Sum :"<<s;
	getch();
}
int sum()
{
	int a,b,sum;
	cout<<"\n\t Enter value :";
	cin>>a;
	cout<<"\n\t Enter value :";
	cin>>b;
	sum=a+b;
	return sum;
}