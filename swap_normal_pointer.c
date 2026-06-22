#include <stdio.h>
    int a( int num1,int num2){
   int swap = num1;
num1= num2;
   num2= swap;
printf("%d%d",num1,num2);
    }
int main() {
    int c = 1;
    int b= 2;
    int *cptr= &c;
    int *bptr= &b;
    a(*cptr,*bptr);
  a(1 ,2);
 return 0;

 
}