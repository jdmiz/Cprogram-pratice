//prajwol
#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int search = 30;
    int found = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == search) {
            printf("Element %d found at position %d\n", search, i + 1);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("Element not found\n");
    }

    return 0;
}