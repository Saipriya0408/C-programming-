#include<stdio.h>
int main()
{
	int odd_sum=0,even_sum=0,i,n=8;
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
		even_sum=even_sum+i;
	    }
		else
		{ 
		odd_sum=odd_sum+i;
		}
	}
	printf("the total even_sum=%d\n",even_sum);
	printf("the total odd_sum=%d",odd_sum);
	return 0;
}