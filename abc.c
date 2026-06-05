//store marks of 35 std in 4 sub and calculate total and avg marks of each std. store student id i n 1st colum.
#include<stdio.h>
int main() {
    float marks[35][5];
    float id[35];
    float total[35]; 
    float avg[35];
    for(int i = 0; i < 35; i++) {
        printf("Enter details for student %d (ID, marks in 4 subjects): ", i + 1);
        scanf("%f %f %f %f %f", &id[i], &marks[i][1], &marks[i][2], &marks[i][3], &marks[i][4]);
        total[i] = marks[i][1] + marks[i][2] + marks[i][3] + marks[i][4];
        avg[i] = total[i] / 4;
    }

}
