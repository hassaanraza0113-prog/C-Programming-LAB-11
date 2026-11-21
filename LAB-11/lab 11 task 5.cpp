#include <stdio.h>

struct PatientInfo
{
    int PatientID;
    char Name[50];
    int Age;
};

struct HospitalRecord
{
    int RecordID;
    char Ward[30];
    struct PatientInfo patient;
};

int main()
{
    struct HospitalRecord record1;

    struct HospitalRecord *ptr;

    ptr = &record1;

    printf("Enter Record ID: ");
    scanf("%d", &ptr->RecordID);

    printf("Enter Ward: ");
    scanf("%29s", ptr->Ward);

    printf("Enter Patient ID: ");
    scanf("%d", &ptr->patient.PatientID);

    printf("Enter Patient Name: ");
    scanf("%49s", ptr->patient.Name);

    printf("Enter Patient Age: ");
    scanf("%d", &ptr->patient.Age);

    printf("\nHospital Record\n");

    printf("Record ID: %d\n", ptr->RecordID);
    printf("Ward: %s\n", ptr->Ward);

    printf("Patient ID: %d\n", ptr->patient.PatientID);
    printf("Patient Name: %s\n", ptr->patient.Name);
    printf("Patient Age: %d\n", ptr->patient.Age);

    return 0;
}
