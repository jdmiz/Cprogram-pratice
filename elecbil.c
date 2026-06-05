#include <stdio.h>

int main()
{
    int num;
int unit;
    printf("Enter a number: ");
    scanf("%d", &num);
//les or equal to 20
 if (num<=20){

unit = num*4;
printf("The units: %d\n", num);
    }
//greater than 20-100 per unit charge 12lse if (num>20 && num <=100){
    else if(num>20 && num <=100){
unit= 80 +(num-20)*12;
    printf("The units: %d\n", unit);
}

else if(num>100){
    unit= 80 +( 80*12) + (num-100)*20;
    printf("The units: %d\n", unit);
}
    return 0;
}