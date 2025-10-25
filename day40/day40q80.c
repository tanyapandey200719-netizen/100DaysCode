//Q80: Multiply two matrices.
#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    scanf("%d %d", &r1, &c1);
    int mat1[10][10], mat2[10][10], result[10][10];
    int i, j, k;
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    scanf("%d %d", &r2, &c2);
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    if(c1 != r2) {
        printf("Matrices cannot be multiplied\n");
        return 0;
    }
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            result[i][j] = 0;
            for(k = 0; k < c1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}

