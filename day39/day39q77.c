//Q77: Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    int matrix[10][10];
    int i, j, flag = 1;
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for(i = 0; i < rows; i++) {
        for(j = i + 1; j < rows; j++) {
            if(matrix[i][i] == matrix[j][j]) {
                flag = 0;
                break;
            }
        }
        if(flag == 0) break;
    }
    if(flag) printf("True\n");
    else printf("False\n");
    return 0;
}

