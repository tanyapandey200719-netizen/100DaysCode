//Q75: Add two matrices.
#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2;
    scanf("%d %d", &rows1, &cols1);
    int matrix1[10][10], matrix2[10][10], sum[10][10];
    int i, j;
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    scanf("%d %d", &rows2, &cols2);
    for(i = 0; i < rows2; i++) {
        for(j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    if(rows1 != rows2 || cols1 != cols2) {
        printf("Matrices cannot be added\n");
        return 0;
    }
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols1; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols1; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}

