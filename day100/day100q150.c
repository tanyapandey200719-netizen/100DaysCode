//Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>
struct Employee {
    char name[50];
    int id;
    float salary;
};
void modify(struct Employee *e) {
    e->salary += 1000;        
    e->id += 1;              
}
void display(struct Employee *e) {
    printf("\n--- Employee Details ---\n");
    printf("Name: %s\n", e->name);
    printf("ID: %d\n", e->id);
    printf("Salary: %.2f\n", e->salary);
}
int main() {
    struct Employee emp;
    struct Employee *ptr = &emp; 
    printf("Enter name: ");
    scanf("%s", ptr->name);
    printf("Enter ID: ");
    scanf("%d", &ptr->id);
    printf("Enter salary: ");
    scanf("%f", &ptr->salary);
    modify(ptr);
    display(ptr);
    return 0;
}

