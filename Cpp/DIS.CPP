#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int price,dis,fp;
	cout<<"Enter price:";
	cin>>price;
	if(price<100)
	{
		cout<<"Not distaunt";
	}
	else
	{
		if(price>=100 && price<=200)
		{
			dis=(price*5)/100;
			fp=price-dis;
			cout<<" you 5% distaunt price :"<<fp;
		}
		else if(price>=199 && price<=400)
		{
			dis=(price*10)/100;
			fp=price-dis;
			cout<<" you 10% distaunt price :"<<fp;
		}
		else if(price>=399 && price<=800)
		{
			dis=(price*14)/100;
			fp=price-dis;
			cout<<" you 14% distaunt price :"<<fp;
		}
		else
		{
			dis=(price*25)/100;
			fp=price-dis;
			cout<<" you 25% distaunt price :"<<fp;
		}
	}
	getch();
}