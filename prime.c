#include<stdio.h>
int main()
{
	int n=5,i,count=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		count=count+1;
	} 
	if(count==2)
	{
		printf("%d is the prime number",n);
	}
	else
	{
		printf("%d is not the prime number",n);
	}
	return 0;
}
	