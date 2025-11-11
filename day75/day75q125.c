//Open an existing file in append mode and allow the user to enter a new line of text.
// Append the text at the end without overwriting existing content.
#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char text[200];

    printf("Enter the filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }

    printf("Enter the text to append: ");
    getchar();  
    gets(text);

    fprintf(fp, "%s\n", text);

    fclose(fp);

    printf("Text appended successfully to %s\n", filename);

    return 0;
}

