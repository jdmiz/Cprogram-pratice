// struct named "employee" store info of 1 employee and it should include int employeeid ,char employeeName[50],char department[50],float salary, accept info from user and display.
#include<stdio.h>
struct employee{
 int employeeid;
    char employeeName[50];
    char department[50];
    float salary;
};
int main(){
 struct employee emp1;
 printf("enter employeeid:");
 scanf("%d", &emp1.employeeid);

 printf("enter employeeName:");
 scanf("%s", &emp1.employeeName);

 printf("enter department:");
 scanf("%s", &emp1.department);

 printf("enter salary:");
 scanf("%f", &emp1.salary);


// display
printf(" employeeid:%d",emp1.department);
 printf(" employeeName:%s",emp1.employeeName);
 printf(" department:%s",emp1.department);
 printf(" salary:%f", emp1.salary);
 
}