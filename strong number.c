#include <stdio.h>

int main() 
{
    int num = 145,sum,digit,fact,i;  
    int originalNum = num;
    sum = 0;

    while (num > 0) 
	{
        digit = num % 10;
        fact = 1;
        for (i = 1; i <= digit; i++) 
		{
            fact *= i;
        }
        sum += fact;
        num /= 10;
    }

    if (sum == originalNum) 
	{
        printf("%d is a Strong Number.\n", originalNum);
    } 
	else 
	{
        printf("%d is not a Strong Number.\n", originalNum);
    }

    return 0;
}