#include<stdio.h>
int sq(int n) {
    return n * n;
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int result = sq(n);
    printf("Square of %d is %d", n, result);
    return 0;
}
