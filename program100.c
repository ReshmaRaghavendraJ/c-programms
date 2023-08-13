#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
typedef struct
{
    char name[20];
    char area[30];
    char contact[30];
} book;

book addrecord();
void search(book[], char[], int);
void viewall(book[], int);

int main()
{
    book b[30];
    char name[20];
    int ch, rec = 0;
    while (1)
    {
        printf("1.Add new record:\n");
        printf("2.Search record:\n");
        printf("3.View all records:\n");
        printf("4.Exit\n");
        printf("Enter your choice:\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            b[rec] = addrecord();
            rec++;
            break;
        case 2:
            printf("Enter name:\n");
            fflush(stdin);
            gets(name);
            search(b, name, rec);
            break;
        case 3:
            viewall(b, rec);
            break;
        case 4:
            exit(0);
        }
    }
    return 0;
}

book addrecord()
{
    book record;
    fflush(stdin);
    printf("Enter Name:\n");
    gets(record.name);
    printf("Enter area:\n");
    gets(record.area);
    printf("Enter contact:\n");
    gets(record.contact);
    return record;
}
void search(book b1[], char name[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        if (strcmp(b1[i].name, name) == 0)
            printf("%s\t%s\t%s\n", b1[i].name, b1[i].area, b1[i].contact);
}
void viewall(book b2[], int n1)
{
    int i;
    for (i = 0; i < n1; i++)
        printf("%s\t%s\t%s\n", b2[i].name, b2[i].area, b2[i].contact);
}
