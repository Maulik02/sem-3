#include<iostream.h>
#include<conio.h>
class calculator
{
	public:
	       static int sum(int a,int b)
	       {
			return a+b;
	       }
	       static int sub(int c,int d)
	       {
			return c-d;
	       }
	       static int mul(int e,int f)
	       {
			return e*f;
	       }
	       static int div(int g,int h)
	       {
			return g/h;
	       }
};
void main()
{
	clrscr();
	int sm=calculator::sum(1,2);
	int sb=calculator::sub(1,2);
	int ml=calculator::mul(2,2);
	int dv=calculator::div(5,2);
	cout<<"\n\tSum:"<<sm;
	cout<<"\n\tSub:"<<sb;
	cout<<"\n\tMul:"<<ml;
	cout<<"\n\tDvi:"<<dv;
	getch();
}