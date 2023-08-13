#include <stdio.h>
#include <string.h>
#include <conio.h>
struct axis
{
    char name[50];
};
void input(struct axis[], int);
void print(struct axis[], int);
int main()
{
    struct axis rec[20];
    int i, n;
    printf("Enter number of record names:\n");
    scanf("%d", &n);
    input(rec, n);
    print(rec, n);
    return 0;
}

void input(struct axis rec[], int n)
{
    int i;
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
}
void print(struct axis rec[], int n)
{
    int i;
    printf("The upper case list of names are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\n", rec[i].name);
    }
}
