#include <stdio.h>


void printFullPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }
}

int main() {
    int numRows;

    
    printf("Enter the number of rows for the full pyramid: ");
    scanf("%d", &numRows);

    
    printFullPyramid(numRows);

    return 0;
}
