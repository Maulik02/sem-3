#include<iostream.h>
#include<conio.h>
class demo
{
	private:
		int a,b;
	public:
		demo()
		{
			a=10;
			b=20;
		}
		void dis()
		{
			cout<<"\n\tA is :"<<a;
			cout<<"\n\tB is :"<<b;
		}
};
void main()
{
	clrscr();
	demo d1;
	d1.dis();
	getch();
}