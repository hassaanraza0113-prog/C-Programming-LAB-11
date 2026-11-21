#include <stdio.h>

struct Item
{
    int ID;
    char Name[50];
    int Quantity;
    float UnitPrice;
};

int main()
{
    struct Item items[5];
    int i, searchID;
    float total = 0;
    int found = 0;

    // Enter details of 5 items
    for (i = 0; i < 5; i++)
    {
        printf("\nEnter details of Item %d\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &items[i].ID);

        printf("Enter Name: ");
        scanf("%49s", items[i].Name);

        printf("Enter Quantity: ");
        scanf("%d", &items[i].Quantity);

        printf("Enter Unit Price: ");
        scanf("%f", &items[i].UnitPrice);

        total = total + (items[i].Quantity * items[i].UnitPrice);
    }

    printf("\nTotal Inventory Value = %.2f\n", total);

    // Search item by ID
    printf("\nEnter Item ID to Search: ");
    scanf("%d", &searchID);

    for (i = 0; i < 5; i++)
    {
        if (items[i].ID == searchID)
        {
            printf("\nItem Found!\n");
            printf("ID: %d\n", items[i].ID);
            printf("Name: %s\n", items[i].Name);
            printf("Quantity: %d\n", items[i].Quantity);
            printf("Unit Price: %.2f\n", items[i].UnitPrice);

            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("Item Not Found!");
    }

    return 0;
}
