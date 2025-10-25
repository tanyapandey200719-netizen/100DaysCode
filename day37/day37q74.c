//Q74: Find the transpose of a matrix.
#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    int matrix[10][10], transpose[10][10];
    int i, j;
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    for(i = 0; i < cols; i++) {
        for(j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}

