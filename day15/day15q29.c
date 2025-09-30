//Q29: Write a program to calculate the factorial of a number.
#include <stdio.h>

int main() {
    int n,i,fact=1;

    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Factorial of a negative number is not defined.\n");
    } else {
        for (i = 1; i <= n; i++) {
            fact = fact * i;
        }
        printf("Factorial of %d = %d\n", n, fact);
    }

    return 0;
}

