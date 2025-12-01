//Take two structs as input and check if they are identical.
#include <stdio.h>
#include <string.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};
int areEqual(struct Student s1, struct Student s2) {
    if (strcmp(s1.name, s2.name) != 0)
        return 0;
    if (s1.roll != s2.roll)
        return 0;
    if (s1.marks != s2.marks)
        return 0;
    return 1;  
}
int main() {
    struct Student a, b;
    printf("Enter details of Student 1:\n");
    printf("Name: ");
    scanf("%s", a.name);
    printf("Roll: ");
    scanf("%d", &a.roll);
    printf("Marks: ");
    scanf("%f", &a.marks);
    printf("\nEnter details of Student 2:\n");
    printf("Name: ");
    scanf("%s", b.name);
    printf("Roll: ");
    scanf("%d", &b.roll);
    printf("Marks: ");
    scanf("%f", &b.marks);
    if (areEqual(a, b))
        printf("\nBoth structures are IDENTICAL.\n");
    else
        printf("\nStructures are NOT identical.\n");
    return 0;
}


