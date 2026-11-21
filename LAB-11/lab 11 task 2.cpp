#include <stdio.h>

struct Product
{
    int ID;
    char Name[50];
    char Category[30];
    float Price;
    int StockQuantity;
};

void displayProductDetails(struct Product p)
{
    float finalPrice;

    finalPrice = p.Price - (p.Price * 5 / 100);

    printf("\nProduct Details\n");
    printf("ID: %d\n", p.ID);
    printf("Name: %s\n", p.Name);
    printf("Category: %s\n", p.Category);
    printf("Original Price: %.2f\n", p.Price);
    printf("Available Stock: %d\n", p.StockQuantity);
    printf("Final Price after 5%% Discount: %.2f\n", finalPrice);
}

int main()
{
    struct Product p1;

    printf("Enter Product ID: ");
    scanf("%d", &p1.ID);

    printf("Enter Product Name: ");
    scanf("%49s", p1.Name);

    printf("Enter Category: ");
    scanf("%29s", p1.Category);

    printf("Enter Price: ");
    scanf("%f", &p1.Price);

    printf("Enter Stock Quantity: ");
    scanf("%d", &p1.StockQuantity);

    displayProductDetails(p1);

    return 0;
}
