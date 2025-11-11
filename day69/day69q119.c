//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. 
//Try to find the result in one single iteration.
#include <stdio.h>

int main() {
    int n, i;
    int arr[1000];
    int sum = 0, expected_sum;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements (only one element is repeated):\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    expected_sum = (n - 1) * (n - 2) / 2;

    for (i = 0; i < n; i++)
        sum += arr[i];

    printf("The repeated element is: %d", sum - expected_sum);

    return 0;
}

