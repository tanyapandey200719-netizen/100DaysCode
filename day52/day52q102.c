//Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
#include <stdio.h>

int main() {
    int n, x, i;
    scanf("%d", &n);
    int arr[100];
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &x);
    int left = 0, right = n - 1, ceilIndex = -1;
    while(left <= right) {
        int mid = left + (right - left) / 2;
        if(arr[mid] >= x) {
            ceilIndex = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    printf("%d\n", ceilIndex);
    return 0;
}

