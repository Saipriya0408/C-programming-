#include <math.h>
int main() 
{
    int i, n = 3;
    double res, sums = 0.0, ser;
    for (i = 1; i <= n; i++)
	{
        ser = 1 / pow(i, i);
        sums += ser;
    }
    
    printf("%lf", sums);
    return 0;
}
