#include <stdio.h>


void printInvertedRightHalfPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j < i; j++) {
            printf(" ");
        }

        
        for (int j = i; j <= n; j++) {
            printf("*");
        }

        printf("\n");
    }
}

int main() {
    int numRows;


    printf("Enter the number of rows for the inverted right half pyramid: ");
    scanf("%d", &numRows);

    
    printInvertedRightHalfPyramid(numRows);

    return 0;
}
