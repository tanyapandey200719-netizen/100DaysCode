//Q90: Toggle case of each character in a string.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    gets(str);
    while(str[i] != '\0') {
        if(str[i] >= 'a' && str[i] <= 'z') str[i] -= 32;
        else if(str[i] >= 'A' && str[i] <= 'Z') str[i] += 32;
        i++;
    }
    printf("%s\n", str);
    return 0;
}

