#include <stdio.h>


void printHollowHourglass(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = n; j > i; j--) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

int main() {
    int numRows;

    
    printf("Enter the number of rows for the hollow hourglass: ");
    scanf("%d", &numRows);

    
    printHollowHourglass(numRows);

    return 0;
}
