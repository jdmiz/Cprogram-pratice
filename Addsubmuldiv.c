#include<stdio.h>
int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}
float divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0; 
    }
    return (float)a / b;
}
int main(){
    int num1, num2, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Choose an operation:\n");
    printf("1. Addition\n");  
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);
    switch (choice ){
 case 1 :
    printf ("addition is %d", add(num1, num2));
    break;
 case 2 :
    printf ("subtraction is %d", subtract(num1, num2));
    break;
    case 3 :
    printf ("multiplication is %d", multiply(num1, num2));
    break;
    case 4 :
    printf ("division is %.2f", divide(num1, num2));    
    break;
    case 5 :
    printf("Exiting the program.");
    break;
    default :
    printf("invalid choice.");

    }
    return 0;
}
