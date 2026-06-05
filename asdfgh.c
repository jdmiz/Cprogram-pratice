// store gpa of 5q students
#include <stdio.h>
int main() {
    float gpa[5];
    float avg;
    printf("Enter the GPA of 5 students: \n");
    for (int i = 0; i <= 4; i++) {
        printf("Student %d: ", i );
        scanf("%f", &gpa[i]);
    }
    printf("\nThe GPA of the students are: \n");
    for (int i = 0; i <= 4; i++) {
        printf(" %f\n, ",  gpa[i]);
    }
    for (int i = 0; i <= 4; i++) {
        avg += gpa[i];
    }
     avg= (float)avg/ 5;
    printf("Average GPA: %.2f\n", avg);
    
    return 0;
}