#include<stdio.h>
int main()
{
	int sum=0,num=123,rev;
	while(num!=0)
	{
		rev=num%10;
		sum=sum+rev;
		num/=10;
	}
	printf("%d",sum);
	return 0;
}