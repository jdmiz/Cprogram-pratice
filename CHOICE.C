#include<stdio.h>

int main(){
    int choice, num1, num2, result;
    
    printf("===== CALCULATOR =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    
    if(choice == 1 || choice == 2 || choice == 3 || choice == 4){
        printf("Enter first number: ");
        scanf("%d", &num1);
        printf("Enter second number: ");
        scanf("%d", &num2);
        
        switch(choice){
            case 1:
                result = num1 + num2;
                printf("Addition: %d", result);
                break;
            case 2:
                result =num1 - num2;
                printf("Subtraction: %d", result);
                break;
            case 3:
                result = num1 * num2;
                printf("Multiplication: %d", result);
                break;
            case 4:
                if(num2 != 0){ 
                    result = num1 / num2;
                    printf("Division: %d", result);
                }
                else{
                    printf("Error: Cannot divide by zero!\n");
                }
                break;
        }
    }
    else{
        printf("Invalid choice! Please enter a number between 1 and 4.\n");
    }
    
    return 0;
}
