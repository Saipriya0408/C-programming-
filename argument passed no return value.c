#include <stdio.h>

void add(int a, int b) {
  printf("%d + %d = %d\n", a, b, a + b);
}

void subtract(int a, int b) {
  printf("%d - %d = %d\n", a, b, a - b);
}

void multiply(int a, int b) {
  printf("%d * %d = %d\n", a, b, a * b);
}

void divide(int a, int b) {
  printf("%d / %d = %d\n", a, b, a / b);
}

void modulus(int a,int b) {
  printf("(%d) %(%d)=%d\n",a,b,a%b);
}

int main() {
  int a, b;
  a=10;
  b=5;

  add(a, b);
  subtract(a, b);
  multiply(a, b);
  divide(a, b);
  modulus(a,b);

  return 0;
}