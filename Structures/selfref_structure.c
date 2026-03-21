#include <stdio.h>
struct self {
    int rollno;
    char section;
    struct self *ptr;
};

int main() {
    struct self s1;
    s1.rollno = 101;
    s1.section = 'A';
    s1.ptr = NULL;

    struct self s2;
    s2.rollno = 102;
    s2.section = 'B';
    s2.ptr = NULL;

    s1.ptr = &s2;
    printf("%d %c", s1.ptr->rollno, s1.ptr->section);
    return 0;
}