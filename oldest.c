// store age of 10 workers and display oldest

#include <stdio.h>
int main() {
    int age[10];
    int oldest = 0;
    printf("Enter the age of 10 workers: \n");
    for (int i = 0; i < 10; i++) {
        printf("Worker %d: ", i + 1);
        scanf("%d", &age[i]);
    }
    for (int i = 0; i < 10; i++) {
        if (age[i] > oldest) {
            oldest = age[i];
        }
    }
    printf("The oldest worker is %d years old.\n", oldest);
    return 0;
}
