//Q86: Check if a string is a palindrome.
#include <stdio.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    int i, j, len = 0, flag = 1;
    while(str[len] != '\0' && str[len] != '\n') {
        len++;
    }
    for(i = 0, j = len - 1; i < j; i++, j--) {
        if(str[i] != str[j]) {
            flag = 0;
            break;
        }
    }
    if(flag) printf("Palindrome\n");
    else printf("Not palindrome\n");
    return 0;
}

