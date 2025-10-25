//Q79: Perform diagonal traversal of a matrix.
#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    int matrix[10][10];
    int i, j;
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int r, c, k;
    for(k = 0; k < rows + cols - 1; k++) {
        if(k % 2 == 0) {
            r = (k < rows) ? k : rows - 1;
            c = k - r;
            while(r >= 0 && c < cols) {
                printf("%d ", matrix[r][c]);
                r--;
                c++;
            }
        } else {
            c = (k < cols) ? k : cols - 1;
            r = k - c;
            while(c >= 0 && r < rows) {
                printf("%d ", matrix[r][c]);
                r++;
                c--;
            }
        }
    }
    printf("\n");
    return 0;
}

