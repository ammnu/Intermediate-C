#include <stdio.h>

#define MAX_SIZE 10

void transposeMatrix(int matrix[][MAX_SIZE], int rows, int cols) {
    int i, j;
    int transposed[MAX_SIZE][MAX_SIZE];

    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            transposed[i][j] = matrix[j][i];
        }
    }

    printf("Transposed matrix:\n");
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int rows, cols;
    int i, j;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    transposeMatrix(matrix, rows, cols);

    return 0;
}
