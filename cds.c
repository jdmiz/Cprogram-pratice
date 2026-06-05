//give an array of integers, wap to extract all number  that are divisible by 3 and 5  into new array and display elements of a new  array.
#include <stdio.h>
int main() {
    int n[10] = {4, 3, 5, 78, 9, 13, 45, 60, 45, 60};
    int divisible[10];
    int count = 0;
    for (int i = 0; i < 10; i++) {
        if (n[i] % 3 == 0 && n[i] % 5 == 0) {
            divisible[count] = n[i];
            count++;
        }
    }
    printf("Numbers divisible by both 3 and 5:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", divisible[i]);
    }
    printf("\n");
    return 0;
}