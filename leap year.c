#include<stdio.h>
int main()
{
	int date=27;
	int month=04;
	int year=2024;
	if((year%4==0&&year%100!=0)||(year%400==0))
	{
		printf("%d/%d/%d is a leap year",date,month,year);
	}
	else
	{
		printf("%d/%d/%d is not a leap year",date,month,year);
	}
	return 0;
}