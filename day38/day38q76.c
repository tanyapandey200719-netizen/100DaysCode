//Q76: Check if a matrix is symmetric.
#include <stdio.h>

int main() {
    int n, i, j, flag = 1;
    scanf("%d", &n);
    int matrix[10][10];
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(matrix[i][j] != matrix[j][i]) {
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

