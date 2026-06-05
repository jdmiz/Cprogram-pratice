/*
By prajwol Chapagaee
*/
#include<stdio.h>
int main(){
    float l, b, AR, AS;
    printf("Enter the length and breadth of the rectangle: ");
    scanf("%f %f", &l, &b);
    AR = l * b;
    printf("Area of the rectangle: %.2f\n", AR);
    printf("Enter the length of the square: ");
    scanf("%f", &l);
    AS = l * l;
    printf("Area of the square: %.2f\n", AS);
    return 0;
}
