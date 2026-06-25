#include <stdio.h>

int main() {
    FILE *fp;
    int n, i;
    int itemCode;
    char itemName[50];
    float price;

    // -------------------------
    // 1. Write records to file
    // -------------------------
    fp = fopen("item.txt", "w");

    printf("Enter number of items: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("\n--- Enter details for Item %d ---\n", i + 1);

        printf("Enter Item Code: ");
        scanf("%d", &itemCode);

        printf("Enter Item Name: ");
        scanf("%s", itemName);

        printf("Enter Item Price: ");
        scanf("%f", &price);

        fprintf(fp, "%d %s %.2f\n", itemCode, itemName, price);
    }

    fclose(fp);

    // -------------------------
    // 2. Read and display
    // -------------------------
    fp = fopen("item.txt", "r");

    printf("\nItems with price less than 100:\n");

    while (fscanf(fp, "%d %s %f", &itemCode, itemName, &price) != EOF) {
        if (price < 100)
            printf("%d %s %.2f\n", itemCode, itemName, price);
    }

    fclose(fp);

    return 0;
}