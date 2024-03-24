#include<stdio.h>
int main()
{
	int total_days=400;
	float years,weeks,days;
    years=(total_days/365);
    weeks=((total_days%365)/7))
	days=total_days-((years*365)+(weeks*7))
	printf("years=%f\n",years);
	printf("weeks=%f\n",years);
	printf("days=%f\n",days);
	return 0;
	
}