//Q97: Print the initials of a name.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    gets(str);
    if(str[0] != ' ') printf("%c.", str[0]);
    while(str[i] != '\0') {
        if(str[i] == ' ' && str[i+1] != '\0' && str[i+1] != ' ') {
            printf("%c.", str[i+1]);
        }
        i++;
    }
    printf("\n");
    return 0;
}

