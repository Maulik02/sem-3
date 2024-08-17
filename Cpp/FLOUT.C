#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b;
	clrscr();
	printf("\n---------------------------------------------------------");
	printf("\n\tEnter Value:");
	scanf("%d",&a);
	printf("\n---------------------------------------------------------");
	printf("\n\tEnter Value:");
	scanf("%d",&b);
	printf("\n---------------------------------------------------------");
	printf("\n\n\t1.Addition is %f",a+b);
	printf("\n\n\t2.Subtration is %f",a-b);
	printf("\n\n\t3.Multiplication is %f",a*b);
	printf("\n\n\t4.Division is %f",a/b);
	getch();
}