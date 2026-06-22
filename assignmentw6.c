//prajwol
#include <stdio.h>

int main() {
    int arr[5];
    int n = 5;
    int *p = arr;

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    printf("\nValue\t\tAddress\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t\t%p\n", *(p + i), (p + i));
    }

    return 0;
}