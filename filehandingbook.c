//cprogram to store 5 records of books in seq file "book.txt" ti should contains bookid,bookname,price,author and publication.
#include <stdio.h>
//struct should come before main
struct Book {
    int id;
    char name[50];
    float price;
    char author[50];
    char publication[50];
};


int main() {
    FILE *fp;
    struct Book b[5];

    fp = fopen("book.txt", "a");

    if(fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    for(int i = 0; i < 5; i++) {
        printf("\nEnter details of book %d\n", i+1);

        printf("Book ID: ");
        scanf("%d", &b[i].id);

        printf("Book Name: ");
        scanf("%s", b[i].name);

        printf("Price: ");
        scanf("%f", &b[i].price);

        printf("Author: ");
        scanf("%s", b[i].author);

        printf("Publication: ");
        scanf("%s", b[i].publication);

        // write to file do it inside loop
        fprintf(fp, "id is %d and the book name is %s with price tag of %.2f made by aurthor: %s with pubication %s\n",
                b[i].id,
                b[i].name,
                b[i].price,
                b[i].author,
                b[i].publication);
    }

    fclose(fp);

    printf("\nRecords stored successfully in book.txt\n");

    return 0;
}