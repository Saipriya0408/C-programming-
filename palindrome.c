 #include<stdio.h>
int main()
{
	int num=141,reversed=0,remainder,originalnum;
	originalnum=num;
	while(num!=0)
	{
		remainder=num%10;
		reversed=reversed*10+remainder;
		num/=10;
		if(originalnum==reversed)
		{
		printf("%d is a palindrome",originalnum);
		}
		else
		{
			printf("%d is not a palindrome",originalnum);
		}
	}
	return 0;
}
