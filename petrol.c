#include<stdio.h>
int main()
{ 
	float mileage=15.0;
	float distance=73.4; 
	float petrol_cost=102.34;
	float week=6;
	
	float litres_per_week=distance/mileage;
	float total_petrol_cost=litres_per_week*petrol_cost;
	float expense_per_week=total_petrol_cost*week;
	
	printf("senthil's weekly expenses:Rs %.2f\n",expense_per_week);
	return 0;
}