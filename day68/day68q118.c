//Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one.
// Print that missing number
#include <stdio.h>

int main() {
    int n, i, sum = 0, total;
    int arr[1000];

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter %d numbers between 0 and %d (one number missing):\n", n - 1, n);
    for (i = 0; i < n - 1; i++)
        scanf("%d", &arr[i]);

    total = n * (n + 1) / 2;

    for (i = 0; i < n - 1; i++)
        sum += arr[i];

    printf("The missing number is: %d", total - sum);

    return 0;
}

