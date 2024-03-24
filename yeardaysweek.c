#include<stdio.h>
int main()
{
	int total_days=400;
	int years,weeks,days;
    years=(total_days/365);
    weeks=(total_days%365)/7;
	days=total_days-((years*365)+(weeks*7));
	printf("years=%d\n",years);
	printf("weeks=%d\n",weeks);
	printf("days=%d\n",days);
	return 0;
	
}