#include<stdio.h>
int main()
{
	int start=1,end=20,i;
	printf("odd num are \n");
	for(i=start;i<=end;i++)
	{
		if(i%2!=0)
		{
			printf("%d\n",i);
		}
	}
	printf("even num are \n");
	for(i=start;i<=end;i++)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}