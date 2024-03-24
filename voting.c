#include<stdio.h>
int main()
{
	int a=18,b=18-a;
	if(a>=18)
	{
		printf("you are eligible to vote");
	}
	else
	{
		printf("you are not eligible to vote,you have to wait for %d years to vote",b);
	}
	return 0;
}