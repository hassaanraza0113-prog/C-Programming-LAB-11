#include <stdio.h>

#define TOLL_RATE 50

void processVehicle(char vehicleType[])
{
    static int totalVehicles = 0;
    static int totalToll = 0;

    totalVehicles++;
    totalToll = totalToll + TOLL_RATE;

    printf("\nVehicle Type: %s\n", vehicleType);
    printf("Toll Fee: %d PKR\n", TOLL_RATE);

    printf("\nToll Plaza Report\n");
    printf("Total Vehicles: %d\n", totalVehicles);
    printf("Total Revenue: %d PKR\n", totalToll);
}

int main()
{
    processVehicle("Car");

    processVehicle("Bus");

    processVehicle("Truck");

    processVehicle("Bike");

    return 0;
}
