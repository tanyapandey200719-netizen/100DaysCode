//Q83: Count vowels and consonants in a string.
#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, i = 0;
    gets(str);
    while(str[i] != '\0') {
        char ch = str[i];
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
               ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {
                vowels++;
            } else {
                consonants++;
            }
        }
        i++;
    }
    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);
    return 0;
}

