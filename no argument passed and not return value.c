#include <stdio.h>
int num1, num2;
void add() {
  int sum = num1 + num2;
  printf("Sum = %d\n", sum);
}
void subtract() {
  int difference = num1 - num2;
  printf("Difference = %d\n", difference);
}
void multiply() {
  int product = num1 * num2;
  printf("Product = %d\n", product);
}
void divide() {
  float quotient = num1 / (float) num2;
  printf("Quotient = %.2f\n", quotient);
}
void modulus() {
	int modulus =num1 % num2;
	printf("remainder = %d\n",modulus);
  
}
int main() {
  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);
  add();
  subtract();
  multiply();
  divide();
  modulus();
  return 0;
}