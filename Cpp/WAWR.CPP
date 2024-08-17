#include<iostream.h>
#include<conio.h>
int sum(int a,int b);
void main()
{
	clrscr();
	int a,b,s;
	cout<<"Enter value :";
	cin>>a;
	cout<<"\nEnter value :";
	cin>>b;
	s=sum(a,b);
	cout<<"\n ANS :"<<s;
	getch();
}
int sum(int a,int b)
{
	int ans;
	ans=a+b;
	return ans;
}