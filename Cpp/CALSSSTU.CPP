#include<iostream.h>
#include<conio.h>
class student
{
	public:
		int rollno;
};
void main()
{
	clrscr();
	student s1;
	s1.rollno=10;
	cout<<"\n Roll No:"<<s1.rollno;
	getch();
}