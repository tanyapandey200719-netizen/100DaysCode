//Q64: Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    long long n;
    int freq[10] = {0};
    int digit;
    int max = 0;
    int result = 0;
    int i;

    if(scanf("%lld", &n) != 1) return 0;
    if(n < 0) n = -n;
    if(n == 0) freq[0] = 1;

    while(n > 0) {
        digit = n % 10;
        freq[digit]++;
        n /= 10;
    }

    for(i = 0; i < 10; i++) {
        if(freq[i] > max) {
            max = freq[i];
            result = i;
        }
    }

    printf("%d\n", result);
    return 0;
}

