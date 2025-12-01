//Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>
struct Date {
    int day;
    int month;
    int year;
};
struct Employee {
    char name[50];
    int id;
    float salary;
    struct Date joining;
};
int main() {
    struct Employee e1, e2;
    FILE *fp;
    printf("Enter employee name: ");
    scanf("%s", e1.name);
    printf("Enter employee ID: ");
    scanf("%d", &e1.id);
    printf("Enter salary: ");
    scanf("%f", &e1.salary);
    printf("Enter joining date (day month year): ");
    scanf("%d %d %d", &e1.joining.day, &e1.joining.month, &e1.joining.year);
    fp = fopen("employee.dat", "wb");   
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }
    fwrite(&e1, sizeof(struct Employee), 1, fp);
    fclose(fp);
    printf("\nEmployee data written to employee.dat successfully.\n");
    fp = fopen("employee.dat", "rb");   
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }
    fread(&e2, sizeof(struct Employee), 1, fp);
    fclose(fp);
    printf("\n--- Employee Data Read From File ---\n");
    printf("Name: %s\n", e2.name);
    printf("ID: %d\n", e2.id);
    printf("Salary: %.2f\n", e2.salary);
    printf("Joining Date: %02d-%02d-%d\n",
           e2.joining.day, e2.joining.month, e2.joining.year);

    return 0;
}

