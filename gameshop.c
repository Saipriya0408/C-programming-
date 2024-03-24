#include<stdio.h>
int main()
{
	int purchased=2000,bonus;
	float a,b,c,d;
	a=1000*20/100;
	b=2000*30/100;
	c=3000*50/100;
	d=3000*60/100;
	if(purchased==1000)
	{
		printf("%f",a);
	}
	if else(purchased==2000)
	{
		printf("%f",b);
	}
	if else(purchased==3000)
	{
		printf("%f",c);
	}
	else(purchased >3000,d)
	{
		printf("%f",d);
	}
	return 0;
}