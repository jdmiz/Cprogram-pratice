#include<stdio.h>
int main() {
    
 int n;
 printf("Enter number to check evens\n");
scanf("%d",&n);
int a,b,c=0;
 while(n!=0){

a=n%10;
b=a%2;
if (b!=0){
c=1;
break;
}
n=n/10;
}
if(c==0){
printf("1");
}
else{
printf("0");
}



    return 0;
}