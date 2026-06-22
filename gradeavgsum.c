#include <stdio.h>
int main() {
    int grades[5] = {85, 90, 78, 92, 88};
    float sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += grades[i];
    }
    float average = sum / 5.0;
    printf("Average: %.2f\n", average);
    
    return 0;
}