#include <stdio.h>


void printHollowInvertedFullPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j < i; j++) {
            printf(" ");
        }

        
        
        for (int j = 1; j <= 2 * (n - i) + 1; j++) {
            if (j == 1 || j == 2 * (n - i) + 1 || i == 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }

        printf("\n");
    }
}

int main() {
    int numRows;

    
    printf("Enter the number of rows for the hollow inverted full pyramid: ");
    scanf("%d", &numRows);

    
    printHollowInvertedFullPyramid(numRows);

    return 0;
}
