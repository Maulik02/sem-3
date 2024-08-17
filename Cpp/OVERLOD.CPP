#include<iostream.h>
#include<conio.h>
int sum(int a,int b);
int sum(int a,int b,int c);
void main()
{
	clrscr();
	int ans1,ans2;
	ans1=sum(10,30);
	ans2=sum(10,30,50);
	cout<<"\n\t Sum of 2 :"<<ans1;
	cout<<"\n\n\t Sum of 3 :"<<ans2;
	getch();

}
int sum(int a,int b)
{
	return(a+b);
}
int sum(int a,int b,int c)
{
	return(a+b+c);
}