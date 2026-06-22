#include <stdio.h>
struct Student {
    int id;
    float gpa;
    char grade;
};
union Data {
    int i;
    float f;
    char c;
};
int main() {
    struct Student s = {101, 3.8, 'A'};
    union Data d;
    d.i = 42;
    printf("Student id:%d gpa:%.1f grade:%c\n",
           s.id, s.gpa, s.grade);
    printf("Union int: %d\n", d.i);
    d.f = 3.14;
    printf("Union float: %.2f\n", d.f);
    return 0;
}
