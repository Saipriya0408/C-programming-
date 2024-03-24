#include<stdio.h>
int main()
{
	int a=5,b,i;
	for(b=1;b<=10;b++)
	{
		i=a*b;
		printf("%d*%d=%d\n",b,a,i);
	}
	return 0;
}