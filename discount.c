#include <stdio.h>

int main()
{
    int num;
int discount;

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("TheMarketprice: %d\n", num);

 if (num>=10000){

discount = num*0.2;

printf("The discounts: %d\n", discount);
int x = num-discount;
printf("The SP: %d\n", x);
    }

    else if(num>=2001 && num <=10000){
discount= num*0.1;
    printf("The discounts: %d\n", discount);
int x = num-discount;
printf("The SP: %d\n", x);
}

    else if(num<=2000){
    discount= 0;
    printf("The discounts: %d\n", discount);
    printf("The SP is : %d\n", num);
}
 else
 {
    printf("Invalid input\n");
 }
 
    return 0;
}