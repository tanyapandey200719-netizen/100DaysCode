//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, j, maxLen = 0, len;
    gets(s);
    int n = strlen(s);
    for(i = 0; i < n; i++) {
        int freq[256] = {0};
        len = 0;
        for(j = i; j < n; j++) {
            if(freq[(int)s[j]] == 0) {
                freq[(int)s[j]] = 1;
                len++;
            } else break;
        }
        if(len > maxLen) maxLen = len;
    }
    printf("%d\n", maxLen);
    return 0;
}

