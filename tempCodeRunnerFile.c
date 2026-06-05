#include<stdio.h>
int main() {
    
 int n;
 printf("Enter number to check evens\n");
scanf("%d",&n);
int b;
 while(n!=0){

n=n%10;
b=n%2;
if (b!=0){
printf("1");
break;
}
}
printf("0");




    return 0;
}