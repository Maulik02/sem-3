#include<iostream.h>
#include<conio.h>
#include<string.h>
class student
{
	private:
		int rno;
		char name[20];
		float precentage;
	public:
		void getvalue()
		{
			rno=1;
			strcpy(name,"Het");
			precentage=80.5;
		}
		void putvalue()
		{
			cout<<"\n\t Roll No:"<<rno;
			cout<<"\n\t Name:"<<name;
			cout<<"\n\t Precentage:"<<precentage;
		}
};
void main()
{
	clrscr();
	student s1;
	s1.getvalue();
	s1.putvalue();
	getch();
}