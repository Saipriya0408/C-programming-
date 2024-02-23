#include <stdio.h>


void printInvertedFullPyramid(int n) {
    for (int i = n; i >= 1; i--) {
        
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


    printf("Enter the number of rows for the inverted full pyramid: ");
    scanf("%d", &numRows);

    
    printInvertedFullPyramid(numRows);

    return 0;
}
