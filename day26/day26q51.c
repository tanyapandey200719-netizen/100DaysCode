/*Write a program to print the following pattern:
    5
   45
  345
 2345
12345  */
#include <stdio.h>

int main() {
    int i, j, k;
    int rows = 5;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }
        for (k = rows - i; k <= 5; k++) {
            printf("%d", k);
        }

        printf("\n");
    }
    return 0;
}

