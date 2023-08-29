#include <stdio.h>
#include <stdlib.h>


struct employee
{
    char name[50];
    float employeeId;
    float experience;
    float salary;

};

int main()
{
    int i=0;
    struct employee employees[5];
    for(i=0;i<5;i++)
    {
        printf("Enter the name of the %d employee: ",i+1);
        scanf("%s",&employees[i].name);
        printf("Enter the Employee Id for Employee %d: ",i+1);
        scanf("%f",&employees[i].employeeId);
        printf("Enter the experience of employee %d: ",i+1);
        scanf("%f",&employees[i].experience);
        printf("Enter the salary of employee %d: ",i+1);
        scanf("%f",&employees[i].salary);
    }
    for(i=0;i<5;i++)
    {
        printf("Employee %d\n",i+1);
        printf("Employee name: %s\n",employees[i].name);
        printf("Employee Id: %f\n",employees[i].employeeId);
        printf("Employee experience: %f\n",employees[i].experience);
        printf("Employee Salary: %f\n",employees[i].salary);

    }
    return 0;
}
