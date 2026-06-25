//write a program to read file student.txt and contains student id and student name and reeal all to display
#include <stdio.h>

int main() {
    FILE *fp;
    int id;
    char name[50];

    fp = fopen("filehandling1.txt", "r");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Student Records:\n");

    while (fscanf(fp, "%d %s", &id, name) != EOF) {
        printf("ID: %d\tName: %s\n", id, name);
    }

    fclose(fp);

    return 0;
}