/* define a calss item having datamember itemno iprice.
create object and acsses deta member*/
#include<iostream.h>
#include<conio.h>
class item
{
	public:
		int itemno,iprice;

};
void main()
{
	clrscr();
	item i1,i2;
	i1.itemno=1;
	cout<<"\n item no:"<<i1.itemno;
	i2.iprice=100;
	cout<<"\n iPrice:"<<i2.iprice;
	getch();
}