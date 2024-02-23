#include <stdio.h>


void printRightHalfPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }
}

int main() {
    int numRows;

    
    printf("Enter the number of rows for the right half pyramid: ");
    scanf("%d", &numRows);

    
    printRightHalfPyramid(numRows);

    return 0;
}
