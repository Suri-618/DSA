#include <stdio.h>
struct date {
    int date;
    int month;
    int year;
};
struct student {
    int id;
    char name[40];
    float cgpa;
    char clg[40];
    struct date dob;
};
int main() {
    struct student s1;
    printf("Enter id: ");
    scanf("%d", &s1.id);
    printf("Enter name: ");
    scanf("%s", s1.name);
    printf("Enter CGPA: ");
    scanf("%f", &s1.cgpa);
    printf("Enter CLG: ");
    scanf("%s", s1.clg);
    printf("Enter DOB (dd mm yyyy): ");
    scanf("%d %d %d", &s1.dob.date, &s1.dob.month, &s1.dob.year);
    printf("ID\tName\tCGPA\tCLG\tDOB\n");
    printf("-------------------------------------------------------\n");
    printf("%d\t%s\t%.2f\t%s\t%d-%d-%d\n", s1.id, s1.name, s1.cgpa, s1.clg, s1.dob.date, s1.dob.month, s1.dob.year);
    printf("AGE is: %d\n", 2025 - s1.dob.year);
    return 0;
}
