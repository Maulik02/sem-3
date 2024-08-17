#include<iostream.h>
#include<conio.h>
int sum(int a,int b)
{
	return a+b;
}
int sum(int p,int q,int r,int s)
{
	return (p+q+r+s);
}
void main()
{
	clrscr();
	cout<<"\n\tSum Two:"<<sum(4,5);
	cout<<"\n\n\tSum Four:"<<sum(1,2,3,4);
	getch();
}