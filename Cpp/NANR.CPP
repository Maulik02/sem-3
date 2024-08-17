#include<iostream.h>
#include<conio.h>
void sum();
void main()
{
	clrscr();
	sum();
	getch();
}
void sum()
{
	int a,b,ans;
	cout<<"\n\t Enter value :";
	cin>>a;
	cout<<"\n\t Enter value :";
	cin>>b;
	ans=a+b;
	cout<<"\n\t ans :"<<ans;

}