#include <stdio.h>
int main(){
    int y=7;
int *pPtr=&y;
int *newPtr;
    printf("%d\n",y);
    printf("%p\n",&y);
    printf("%p\n",pPtr);
    printf("%d\n",*pPtr);
     printf("%d\n",*newPtr);
    return 0;
}