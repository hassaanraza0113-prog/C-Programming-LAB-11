#include <stdio.h>

struct Address
{
    char City[30];
    int ZipCode;
    char State[30];
};

struct Student
{
    int RollNo;
    char Name[50];
    float CGPA;
    struct Address studentAddress;
};

int main()
{
    struct Student student1;

    printf("Enter Roll Number: ");
    scanf("%d", &student1.RollNo);

    printf("Enter Student Name: ");
    scanf("%49s", student1.Name);

    printf("Enter CGPA: ");
    scanf("%f", &student1.CGPA);

    printf("Enter City: ");
    scanf("%29s", student1.studentAddress.City);

    printf("Enter Zip Code: ");
    scanf("%d", &student1.studentAddress.ZipCode);

    printf("Enter State: ");
    scanf("%29s", student1.studentAddress.State);

    printf("\nStudent Complete Profile\n");

    printf("Roll Number: %d\n", student1.RollNo);
    printf("Name: %s\n", student1.Name);
    printf("CGPA: %.2f\n", student1.CGPA);

    printf("City: %s\n", student1.studentAddress.City);
    printf("Zip Code: %d\n", student1.studentAddress.ZipCode);
    printf("State: %s\n", student1.studentAddress.State);

    return 0;
}
