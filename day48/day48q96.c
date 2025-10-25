//Q96: Reverse each word in a sentence without changing the word order.
#include <stdio.h>

int main() {
    char str[200];
    int i = 0, start, j;
    gets(str);
    while(str[i] != '\0') {
        start = i;
        while(str[i] != ' ' && str[i] != '\0') i++;
        for(j = i - 1; j >= start; j--) printf("%c", str[j]);
        if(str[i] == ' ') printf(" ");
        if(str[i] == '\0') break;
        i++;
    }
    printf("\n");
    return 0;
}

