//Q94: Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    gets(str);
    int i = 0, start = 0, maxLen = 0, maxStart = 0;
    while(1) {
        if(str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            int len = i - start;
            if(len > maxLen) {
                maxLen = len;
                maxStart = start;
            }
            if(str[i] == '\0' || str[i] == '\n') break;
            start = i + 1;
        }
        i++;
    }
    for(i = maxStart; i < maxStart + maxLen; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}

