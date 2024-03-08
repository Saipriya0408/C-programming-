#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b) 
{
    return a - b;
}

int multiply(int a, int b) 
{
    return a * b;
}

int divide(int a, int b)
{
    return a / b;
}

int modulus(int a,int b) 
{
    return a%b;
}


int main() 
{
    int a=10, b=8;
    

    printf("Sum: %d\n", add(a, b));
    printf("Difference: %d\n", subtract(a, b));
    printf("Product: %d\n", multiply(a, b));
    printf("Quotient: %d\n", divide(a, b));
    printf("remainder : %d\n",modulus(a,b));

    return 0;
}