#include<stdio.h>
int checkeven(int num) {
    if (num % 2 == 0) {
        
        return 1;
    } else {
        
        return 0;
    }
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num); 
    if (checkeven(num)==1) {
 printf("%d is an even number.", num);
    }
    else{
 printf("%d is an odd number.", num);
    }
    
}