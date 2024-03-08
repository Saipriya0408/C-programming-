#include<stdio.h>
#include<stdlib.h>

int num1, num2;

int add() {
    return num1 + num2;
}

int sub() {
    return num1 - num2;
}

int mul() {
    return num1 * num2;
}

int divide() {
    
    return num1 / num2;
}

int mod() {
    return num1 % num2; 
}

int main() {
    int result;

    printf("Enter two numbers:");
    scanf("%d %d", &num1, &num2);

    result = add();
    printf("Addition=%d\n", result);

    result = sub();
    printf("Subtraction=%d\n", result);

    result = mul();
    printf("Multiplication=%d\n", result);

    result = divide();
    printf("Division=%d\n", result);

    result = mod();
    printf("remainder=%d\n",result);

    return 0;
}