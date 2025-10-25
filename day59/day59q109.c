//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
#include <stdio.h>

int main() {
    int n, k, i, j;
    scanf("%d", &n);
    int arr[100];
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);
    int maxSum = 0;
    for(i = 0; i <= n - k; i++) {
        int sum = 0;
        for(j = i; j < i + k; j++) sum += arr[j];
        if(i == 0 || sum > maxSum) maxSum = sum;
    }
    printf("%d\n", maxSum);
    return 0;
}

