#include<stdio.h>
int factorial(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return n*factorial(n-1);
	}
}
int main()
{
	int number=6;
	if(number<0)
	{
		printf("factorial is not defined for negative number.");
	}
	else
	{
		int result=factorial(number);
		printf("factorial of %d=%d",number,result);
	}
}