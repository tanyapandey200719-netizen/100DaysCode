//Q98: Print initials of a name with the surname displayed in full.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0, lastSpace = -1;
    gets(str);
    while(str[i] != '\0') {
        if(str[i] == ' ') lastSpace = i;
        i++;
    }
    i = 0;
    while(i < lastSpace) {
        if(i == 0) printf("%c.", str[i]);
        else if(str[i] == ' ' && str[i+1] != ' ') printf("%c.", str[i+1]);
        i++;
    }
    printf(" %s\n", &str[lastSpace+1]);
    return 0;
}

