//Q100: Print all sub-strings of a string.
#include <stdio.h>

int main() {
    char str[100];
    int i, j, k;
    gets(str);
    for(i = 0; str[i] != '\0'; i++) {
        for(j = i; str[j] != '\0'; j++) {
            for(k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            if(str[j+1] != '\0') printf(",");
        }
    }
    printf("\n");
    return 0;
}

