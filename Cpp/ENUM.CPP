#include<iostream.h>
#include<conio.h>

enum week_day{mon=1,tue,wed,thu,fri,sat,sun};

void main()
{

	clrscr();
	enum week_day d1;
	d1=wed;
	cout<<"\n\tDay:"<<d1;

	getch();
}