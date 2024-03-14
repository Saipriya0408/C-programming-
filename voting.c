#include<stdio.h>
int main()
{
	int age=19;
	if(age>=18)
	{
		printf("you are eligible for voting");
	}
	else
	{
		printf("you are not eligible for voting you've to wait for %d year",18-age);
	}
	return 0;
}