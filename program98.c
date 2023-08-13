#include <stdio.h>
#include <string.h>
#include <conio.h>
struct axis
{
    char name[50];
};
int main()
{
    struct axis rec[20];
    int i, n;
    printf("Enter number of record names:\n");
    scanf("%d", &n);
    printf("Enter list of names:\n");
    for (i = 0; i < n; i++)
    {
        fflush(stdin);
        gets(rec[i].name);
    }
    for (i = 0; i < n; i++)
    {
        strupr(rec[i].name);
    }
    printf("The upper case list of names are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\n", rec[i].name);
    }
    return 0;
}
