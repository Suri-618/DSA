#include <stdio.h>
struct date
{
    int date;
    int month;
    int year;
};
struct student 
{
    int id;
    char name[40];
    float cgpa;
    char clg[40];
    struct date dob;
};
int main()
{
  struct student s1 ={1,"Surendra",7.6,"AUS",{18,06,2006}};
  printf("ID\tName\tCGPA\tCLG\tDOB\n");
  printf("-------------------------------------------------------\n");
  printf("%d\t%s\t%.2f\t%s\t%d-%d-%d\n",s1.id,s1.name,s1.cgpa,s1.clg,s1.dob.date,s1.dob.month,s1.dob.year);
  printf("AGE is : %d\n",2025-s1.dob.year);

    return 0;
}
