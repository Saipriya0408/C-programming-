#include<stdio.h>
int main()
{
	int n=7,i,count=0;
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		count=count+i;
	}
	if(n==count)
	{
		printf("%d is the perfect number",n);
	}
	else
	{
		printf("%d is not perfect number",n);
	}
	return 0;
	
}