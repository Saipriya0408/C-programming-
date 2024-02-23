#include <stdio.h>


void printHourglass(int n) {
    for (int i = n; i >= 1; i--) {
        
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }

        
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    for (int i = 2; i <= n; i++) {
        
        for (int j = 0; j < n - i; j++) {
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

    
    printf("Enter the number of rows for the hourglass: ");
    scanf("%d", &numRows);

    
    printHourglass(numRows);

    return 0;
}
