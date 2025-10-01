//Q39: Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main() {
    int num, digit, product = 1;
    int hasOdd = 0; 
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0) {
        num = -num;
    }
    while (num > 0) {
        digit = num % 10;  
        if (digit % 2 != 0) { 
            product *= digit;
            hasOdd = 1;
        }
        num = num / 10;   
    }
    if (hasOdd) {
        printf("Product of odd digits: %d\n", product);
    } else {
        printf("No odd digits found.\n");
    }
    return 0;
}

