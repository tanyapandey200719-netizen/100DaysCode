//Q93: Check if two strings are anagrams of each other.
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int freq1[26] = {0}, freq2[26] = {0};
    int i = 0;
    gets(str1);
    gets(str2);
    for(i = 0; str1[i] != '\0'; i++) {
        if(str1[i] >= 'a' && str1[i] <= 'z') freq1[str1[i]-'a']++;
    }
    for(i = 0; str2[i] != '\0'; i++) {
        if(str2[i] >= 'a' && str2[i] <= 'z') freq2[str2[i]-'a']++;
    }
    for(i = 0; i < 26; i++) {
        if(freq1[i] != freq2[i]) {
            printf("Not anagrams\n");
            return 0;
        }
    }
    printf("Anagrams\n");
    return 0;
}

