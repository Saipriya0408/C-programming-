#include <stdio.h>


void printInvertedLeftHalfPyramid(int n) {
    for (int i = n; i >= 1; i--) {
        
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }
}

int main() {
    int numRows;

    
    printf("Enter the number of rows for the inverted left half pyramid: ");
    scanf("%d", &numRows);

    
    printInvertedLeftHalfPyramid(numRows);

    return 0;
}
