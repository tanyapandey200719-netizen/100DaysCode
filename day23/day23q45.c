//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>

int main() {
    int n;
    int numerator, denominator, i;
    double sum;
    sum = 0.0;
    numerator = 2;    
    denominator = 3;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        sum += (double)numerator / denominator;
        numerator += 2;     
        denominator += 4;   
    }
    printf("Sum of the series: %lf\n", sum);
    return 0;
}

