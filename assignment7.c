//Prajwol
#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

void display(struct Student *p) {  
    printf("Roll No : %d\n",   p->rollNo);
    printf("Name    : %s\n",   p->name);
    printf("Marks   : %.1f\n", p->marks);
}

int main() {
    struct Student s = {7, "Priya", 94.5};
    display(&s);   
    return 0;
}