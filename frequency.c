#include<stdio.h>
int main()
{
	char str[1000]="saveeeeeetha",ch='e',i;
	int count=0;
	for(i=0;str[i]!=0;i++)
	{
		if(ch==str[i])
		count++;
	} 
	printf("frequency =%d",count);
	return 0;
}