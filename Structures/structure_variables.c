
#include <stdio.h>
#include <string.h>
struct student {
    int rollno;
    char name[50];
    float marks;
} s1, s2; // variable during structure definition

struct employee {
    int empno;
    char name[50];
    int salary;
};
int main() {
    struct employee e1; // variable after structure definition
    struct student s3 = {
        75,
        "Tamil Selvan",
        99.5,
    }; // assigning at declaration

    // assigning individually
    e1.empno = 101;
    strcpy(e1.name, "ABC");
    e1.salary = 1000000;

    printf("Roll No. %d\n", s3.rollno);
    printf("Name: %s\n", s3.name);
    printf("Marks: %.2f\n", s3.marks);
    printf("\n");
    printf("Emp No. %d\n", e1.empno);
    printf("Name: %s\n", e1.name);
    printf("Salary: %d\n", e1.salary);

    return 0;
}