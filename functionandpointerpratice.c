//prajwol
#include <stdio.h>
void add(int a, int b) { printf("Sum: %d\n", a + b); }
void subtract(int a, int b) { printf("Difference: %d\n", a - b); }
void multiply(int a, int b) { printf("Product: %d\n", a * b); }

int main() {
    void (*operation)(int, int);
    int choice;
    printf("Choose: 1=Add 2=Subtract 3=Multiply: ");
    scanf("%d", &choice);
    if (choice == 1) operation = add;
    else if (choice == 2) operation = subtract;
    else operation = multiply;
    operation(10, 5);
    return 0;
}
