#include<stdio.h>
#include<math.h>
int main()
{
	int apple=100,banana=60,pomo=153;
	int q1=5,q2=3,q3=7,total,cost;
	float dis,purchase;
	apple=apple*q1;
	banana=banana*q2;
	pomo=pomo*q3;
	total=apple+banana+pomo;
	if(total>=300)
	{
		dis=0.2;
	}
	purchase=total*dis;
	total=total-purchase;
	printf("the total amount is%d\n",total);
	printf("the purchased amount is%.2f",purchase);
	return 0;
}