#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i;
	clrscr();
	printf("\n\t Enter 5 Value...");
	for(i=1;i<=5;i++)
	{
		printf("\n\t%d",i+1);
		scanf("%d",&a[i]);
	}
	for(i=1;i<=5;i++)
	{
		printf("\n\t%d",a[i]);
	}
	getch();
}