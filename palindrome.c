#include<stdio.h>
int main()
{
	int num=121,originalnum,rev=0,rem;
	originalnum=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num/=10;
	}
	if(rev==originalnum)
	{
		printf("%d is a palindrome",originalnum);
	}
	else
	{
		printf("%d is not a palindrome",originalnum);
	}
	return 0;
}