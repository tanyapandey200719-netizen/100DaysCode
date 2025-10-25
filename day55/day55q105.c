//Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ?n / 2? times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    int nums[100];
    for(i = 0; i < n; i++) scanf("%d", &nums[i]);
    int majority = -1;
    for(i = 0; i < n; i++) {
        int count = 0;
        for(j = 0; j < n; j++) {
            if(nums[j] == nums[i]) count++;
        }
        if(count > n / 2) {
            majority = nums[i];
            break;
        }
    }
    printf("%d\n", majority);
    return 0;
}

