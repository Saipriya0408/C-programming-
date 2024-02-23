#include <stdio.h>


void printHollowFullPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        
        
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == n) {
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

    
    printf("Enter the number of rows for the hollow full pyramid: ");
    scanf("%d", &numRows);

    
    printHollowFullPyramid(numRows);

    return 0;
}
