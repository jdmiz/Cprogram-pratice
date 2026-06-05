#include <stdio.h>

int main() {

char a[50],b[50];

 printf("entername:");
 fgets(a,sizeof(a),stdin);
printf ("enter college:");
 fgets(b,sizeof(b),stdin);
 printf("my name is %s and college is %s ",a,b);
      return 0;
}