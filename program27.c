#include <stdio.h>
typedef struct struc
{
    int empno, salary;
    char name[30];
} ibm;

int main()
{
    ibm rec[3];
    int i;
    printf("Enter the Values:\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &rec[i].empno);
        fflush(stdin);
        scanf("%d", &rec[i].salary);
        scanf("%s", &rec[i].name);
    }

    printf("The ibm employee details are:\n");
    for (i = 0; i < 3; i++)
        printf("%d\t%d\t%-20s\n", rec[i].empno, rec[i].salary, rec[i].name);
    return 0;
}
