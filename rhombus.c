#include <stdio.h>


void printRhombus(int n) {
    
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        
        for (int j = 1; j <= n; j++) {
            printf("*");
        }

        printf("\n");
    }

    
    for (int i = n - 1; i >= 1; i--) {
        
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        
        for (int j = 1; j <= n; j++) {
            printf("*");
        }

        printf("\n");
    }
}

int main() {
    int numRows;

    
    printf("Enter the number of rows for the rhombus: ");
    scanf("%d", &numRows);

    
    printRhombus(numRows);

    return 0;
}
