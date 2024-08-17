#include<iostream.h>
#include<conio.h>
#include<string.h>
class book
{
	private:
		char title[20];
		float price;
	public:
		book(char t[20],float p)
		{
			strcpy(title,t);
			price=p;
		}
		void dis()
		{
			cout<<"\n\t Title of the book :"<<title;
			cout<<"\n\t price of the book :"<<price;
		}
};
void main()
{
	clrscr();
	book b1("php",200.50);
	cout<<"\n\n\t Information of the book :";
	b1.dis();
	getch();
}