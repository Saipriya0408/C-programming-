#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// Function to calculate binomial coefficient
int binomialCoefficient(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

// Function to print Pascal's Triangle
void printPascalsTriangle(int numRows) {
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", binomialCoefficient(i, j));
        }
        printf("\n");
    }
}

int main() {
    int numRows;

    // Input the number of rows for Pascal's Triangle
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &numRows);

    // Print Pascal's Triangle
    printPascalsTriangle(numRows);

    return 0;
}
