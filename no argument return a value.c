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
    if (num2 == 0) {
        printf("Error: Division by zero\n");
        exit(1); // Exiting program if division by zero occurs
    }
    return num1 / num2;
}

int absolute() {
    return abs(num1); // Using abs() from stdlib.h to calculate absolute value
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

    printf("Enter a number:");
    scanf("%d", &num1);
    result = absolute();
    printf("Absolute value=%d\n", result);

    return 0;
}