#include<stdio.h>
int main()
{
	int year=2028;
	int date=26;
	int month=2;
	if((year%4==0&&year%100!=0)||(year%400==0))
	{
		printf("%d/%d/%d is a leap year",date,month,year);
	}
	else
	{
		printf("%d/%d/%d not leap year",year,date,month);
	}
	return 0;
}