
#include <stdio.h>
int main() {
    int num1=10;
    int num2=20;

   int large= largeValue(&num1,&num2);
    printf("Large value: %d\n", large); 

    return 0;
}
int largeValue(int *a, int *b) {
    if (*a > *b) {
        return *a;
    } else {
        return *b;
    }
}