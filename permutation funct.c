#include<stdio.h>
#include<string.h>
void swap(char *x,char *y)
{
	char temp=*x;
	*x=*y;
	*y=temp;
}
int main()
{
	char st[]="car";
	int len=strlen(st);
	int i,j;
	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
		{
			swap(&st[i],&st[j]);
			printf("%s\n",st);
			swap(&st[i],&st[j]);
		}
	}
	return 0;
}