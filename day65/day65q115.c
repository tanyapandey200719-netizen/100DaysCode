//Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".
#include <stdio.h>
#include <string.h>

int main() {
    char s[100], t[100];
    scanf("%s", s);
    scanf("%s", t);
    int freq1[26] = {0}, freq2[26] = {0};
    int i;
    for(i = 0; s[i] != '\0'; i++) freq1[s[i]-'a']++;
    for(i = 0; t[i] != '\0'; i++) freq2[t[i]-'a']++;
    int flag = 1;
    for(i = 0; i < 26; i++) {
        if(freq1[i] != freq2[i]) {
            flag = 0;
            break;
        }
    }
    if(flag) printf("Anagram\n");
    else printf("Not Anagram\n");
    return 0;
}

