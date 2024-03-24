 #include<stdio.h>
int main()
{
	int a=8,b=6,c=15;
	if((a>b)&&(a>c))
	{
		printf("%d is the greatest number",a);
	}
	else if((b>a)&&(b>c))
	{
		printf("%d is the greatest number",b);
	}
	else
	{
		printf("%d is the greatest number",c);
	}
	return 0;
}