//Q88: Replace spaces with hyphens in a string.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    fgets(str, sizeof(str), stdin);
    while(str[i] != '\0' && str[i] != '\n') {
        if(str[i] == ' ') str[i] = '-';
        i++;
    }
    printf("%s\n", str);
    return 0;
}

