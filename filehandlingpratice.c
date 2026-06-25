#include<stdio.h>
int main() {
    //FILE DECLARE
 FILE *fp;
 //FILE CREATE

 fp = fopen("filehandling1.txt","w");
// FILE EXISTENCE  CHECK
if (fp== NULL ){
printf("error");
return 1;
}

int id;
char name[50];

 printf("enter a id");
 scanf("%d",&id);
 printf("enter a name");
 scanf("%s",name);
//write in file
fprintf(fp," id is %d and name is %s \n",id,name);
//close
fclose(fp);
//toread



}