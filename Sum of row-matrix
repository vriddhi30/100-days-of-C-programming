#include <stdio.h>

int main() {
    int matrix[10][10], rowSum[10];
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        rowSum[i] = 0;

        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j];
        }
    }

    printf("Sum of each row:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d = %d\n", i + 1, rowSum[i]);
    }

    return 0;
}