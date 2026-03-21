#include <stdio.h>
#include <string.h>
struct student {
    int rollno;
    char name[50];
    float marks;
};
void print_student(struct student std) {
    printf("Student Information:\n");
    printf("Roll No. %d\n", std.rollno);
    printf("Name: %s\n", std.name);
    printf("Marks: %.2f\n", std.marks);
    printf("\n");
}
int main() {
    struct student s1;
    s1.marks = 80;
    strcpy(s1.name, "XYZ");
    s1.rollno = 202;
    print_student(s1);
    return 0;
}