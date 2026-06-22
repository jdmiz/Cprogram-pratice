#include<stdio.h>

struct person{
 int age[10];
    char name[50];
    
};
int main(){
 struct person p[3];
 for (int i=0; i<3; i++){
    printf("enter your details %d \n",i+1);
    printf("name:\n");
     scanf("%s", p[i].name);
 
 printf("enter age:\n");
 scanf("%d", p[i].age);

 }


// display
for (int i=0;i<3;i++){

printf(" age:%d", p[i].age[i]);
 printf(" name:%s", p[i].name[i]);
 
}
}