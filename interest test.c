 #include<stdio.h>
float calculatesi(float principal,float time,char customertype);
int main()
{
	float principal=200000,time=3,rate,si;
	char customertype='n';
	si=calculatesi(principal,time,customertype);
	printf("the simple interest is %.2f",si);
	return 0;
}
float calculatesi(float principal,float time,char customertype)
{
	float rate;
	if(customertype=='y'||customertype=='Y')
	{
		rate=12.0;
	}
	else
	{
		rate=10.0;
	}
	return (principal*rate*time)/100;
}