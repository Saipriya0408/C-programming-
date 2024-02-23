#include <stdio.h>


void printFloydsTriangle(int numRows) {
    int number = 1;
    for (int i = 1; i <= numRows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", number);
            number++;
        }
        printf("\n");
    }
}

int main() {
    int numRows;

    
    printf("Enter the number of rows for Floyd's Triangle: ");
    scanf("%d", &numRows);

    printFloydsTriangle(numRows);

    return 0;
}
