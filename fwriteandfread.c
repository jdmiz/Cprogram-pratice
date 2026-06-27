/*WAP c program using a structure and user defiend fimction to store and display 5 boook records in a raondom access file book*/
#include <stdio.h>
#include <stdlib.h>

struct Book
{
    int bookId;
    char title[50];
    char author[50];
    float price;
};

void storeBooks();
void displayBooks();

int main()
{
    storeBooks();
    displayBooks();
    return 0;
}

// Function to store 5 book records in Books.dat
void storeBooks()
{
    FILE *fp;
    struct Book b;
    int i;

    fp = fopen("Books.dat", "wb");

    if (fp == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }

    printf("Enter details of 5 books:\n");

    for (i = 0; i < 5; i++)
    {
        printf("\nBook %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &b.bookId);

        printf("Enter Title: ");
        scanf(" %[^\n]", b.title);

        printf("Enter Author: ");
        scanf(" %[^\n]", b.author);

        printf("Enter Price: ");
        scanf("%f", &b.price);

        fwrite(&b, sizeof(struct Book), 1, fp);
    }

    fclose(fp);
}

// Function to read and display records from Books.dat
void displayBooks()
{
    FILE *fp;
    struct Book b;

    fp = fopen("Books.dat", "rb");

    if (fp == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }

    printf("\n\nBook Records Stored in File:\n");
    printf("-------------------------------------------------\n");

    while (fread(&b, sizeof(struct Book), 1, fp) == 1)
    {
        printf("Book ID : %d\n", b.bookId);
        printf("Title   : %s\n", b.title);
        printf("Author  : %s\n", b.author);
        printf("Price   : %.2f\n", b.price);
        printf("-------------------------------------------------\n");
    }

    fclose(fp);
}