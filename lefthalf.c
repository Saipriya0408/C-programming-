#include <stdio.h>


void printLeftHalfPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }
}

int main() {
    int numRows;

    
    printf("Enter the number of rows for the left half pyramid: ");
    scanf("%d", &numRows);

    
    printLeftHalfPyramid(numRows);

    return 0;
}
