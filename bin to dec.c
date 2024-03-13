#include<stdio.h>
int bitodec(long long binum)
{
	int decnum=0,rem,base=1;
	while(binum!=0)
	{
		rem=binum%10;
		decnum+=rem*base;
		base*=2;
		binum/=10;
	}
	return decnum;
}
int main()
{
	long long binum=11101001001;
	int decnum=bitodec(binum);
	printf("decimal equivalent of %lld is %d",binum,decnum);
}