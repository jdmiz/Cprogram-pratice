#include <stdio.h>

int main()
{
    float num;
float fare;
    printf("Enter a km: ");
    scanf("%f", &num);
//finding fare cos0t if less than 2 km where 2km cost 50
 if (num<=2){

fare = num*25;
printf("The fares: %.2f\n", fare    );
    }
    //finding fare cost if less than 10km  and more than 2km where till 2-10 km cost 15 per km
    else if(num>2 && num <=10){
fare= 50 +(num-2)*15;
    printf  ("The fares: %.2f\n", fare);
}
 //finding fare cost more than 10km cost 25 per km
else if(num>10){
    fare= 50+15*8+(num-10)*25;
    printf("The fares: %.2f\n", fare);
}
    return 0;
}