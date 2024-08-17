/* difine a class product having data member p_no,p_name,p_price.
   define a product number to inislice data member.
   define shoe function to display all value.
   create 2 object and call function.

note-inpliment ago program using concept array object and display
     infomation 5 product */

#include<iostream.h>
#include<conio.h>
#include<string.h>
class product
{
	private:
		int pno;
		char pname[10];
		float pprice;
	public:
		void getproduct(int a,char b[],float c)
		{
			pno=a;
			strcpy(pname,b);
			pprice=c;
		}
		void display()
		{
			cout<<"\n\n\n\t Product No:"<<pno;
			cout<<"\n\t Product Name:"<<pname;
			cout<<"\n\t Product Price:"<<pprice;
		}
};
void main()
{
	clrscr();
	product p1,p2;
	p1.getproduct(1,"Pen",10.9);
	p1.display();
	p2.getproduct(2,"Book",100.50);
	p2.display();
	getch();
}
