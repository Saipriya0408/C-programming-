#include<stdio.h>
int main()
{
	char a[ ]="god of war";
	int i; 
	int freq[256]={0};
	for(i=0;a[i]!='\0';i++)
	{
		freq[a[i]]++;
	}
	for(i=0;i<256;i++)
	{
		if(freq[i]!=0)
		{
			printf("the frequency of %c is %d\n",i,freq[i]);
		}
	}
	return 0;
}