#incude<stdio.h>
#incude<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("\n---------------------------------------------------------");
	printf("\n\tEnter Value:");
	scanf("%d",&a);
	printf("\n---------------------------------------------------------");
	printf("\n\tEnter Value:");
	scanf("%d",&b);
	printf("\n--"-------------------------------------------------------);
	printf("\n\n\t1.Addition is %d",a+b);
	printf("\n\n\t2.Subtration is %d,a-b");
	printf("\n\n\t3.Multiplication is %d",a*b);
	printf("\n\n\t4.Division is %d",a/b);
	getch();
}