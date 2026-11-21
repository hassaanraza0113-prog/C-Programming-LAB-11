#include <stdio.h>

int calculateChecksum(int n)
{
    int sum = 0;

    if (n < 10)
    {
        return n;
    }

    while (n > 0)
    {
        sum = sum + (n % 10);
        n = n / 10;
    }

    return calculateChecksum(sum);
}

int main()
{
    int id;

    printf("Enter Transaction ID: ");
    scanf("%d", &id);

    printf("Digital Root = %d", calculateChecksum(id));

    return 0;
}
