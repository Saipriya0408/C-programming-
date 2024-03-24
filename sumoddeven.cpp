#include<stdio.h>
int main()
{
	int evensum=0,oddsum=0,ecount=0,ocount=0,i;
	for(i=1;i<=10;i++)
	{
		if(i%2==0)
		{
			evensum=evensum+i;
			ecount++;
		}
		else
		{
			oddsum=oddsum+i;
			ocount++;
		}
	}
	printf("the num of even numbers=%d\n",ecount);
	printf("the num of odd numbers=%d\n",ocount);
	printf("the sum of even num=%d\n",evensum);
	printf("the sum of odd num=%d",oddsum);
}