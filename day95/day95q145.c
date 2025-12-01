//Return a structure containing top student's details from a function.
#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};
struct Student getTopper(struct Student s[], int n) {
    int i, maxIndex = 0;
    for (i = 1; i < n; i++) {
        if (s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }
    return s[maxIndex]; 
}
int main() {
    struct Student s[5];
    int i;
    printf("Enter details of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter roll: ");
        scanf("%d", &s[i].roll);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    struct Student topper = getTopper(s, 5);
    printf("\n--- Top Student Details ---\n");
    printf("Name: %s\n", topper.name);
    printf("Roll Number: %d\n", topper.roll);
    printf("Marks: %.2f\n", topper.marks);
    return 0;
}

