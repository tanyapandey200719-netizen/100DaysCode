//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>
int main() {
    int n;
    int numerator, denominator, i;
    double sum;
    sum = 0.0;
    numerator = 1;
    denominator = 2;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        sum += (double)numerator / denominator;
        numerator += 2;   
        denominator += 2; 
    }
    printf("Sum of the series: %lf\n", sum);

    return 0;
}


