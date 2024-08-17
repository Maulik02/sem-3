#include<iostream.h>
#include<conio.h>
int area(int len,int width);
float area(float b,float h);
float area(int redius);
void main()
{
	clrscr();
	int area1;
	float area2,area3;
	area1=area(10,20);
	area2=area(2.3f,45.2f);
	area3=area(10);
	cout<<"\n area of rectangle="<<area1;
	cout<<"\n area of tringle="<<area2;
	cout<<"\n area of circle="<<area3;
	getch();
}
int area(int len,int width)
{
	int ans;
	ans=len*width;
	return(ans);
}
float area(float b,float h)
{
	return(0.5*b*h);
}
float area(int redius)
{
	return(3.14*redius*redius);
}