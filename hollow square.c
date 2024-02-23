#include <stdio.h>


void printHollowSquare(int rows, int columns) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= columns; j++) {
            if (i == 1 || i == rows || j == 1 || j == columns) {
                
                printf("*");
            } else {
                
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int numRows, numColumns;

    
    printf("Enter the number of rows for the hollow square: ");
    scanf("%d", &numRows);
    printf("Enter the number of columns for the hollow square: ");
    scanf("%d", &numColumns);

    
    printHollowSquare(numRows, numColumns);

    return 0;
}
