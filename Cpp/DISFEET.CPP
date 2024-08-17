/* create a class distance that has feet as data member
create a constructor that does not grt any arguments to initialize the feet
as zero */
#include<iostream.h>
#include<conio.h>
class distance
{
	private:
		int feet;
	public:
		distance()
		{
			feet=0;
			cout<<"\n\tEnter Distance In Feet :";
			cin>>feet;
			cout<<"\n\tFeet:"<<feet;
		}
};
void main()
{
	clrscr();
	distance d1;
	getch();
}