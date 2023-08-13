#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void up(char[]);
int main()
{
    char str[10][20];
    int n, i, j;
    printf("Enter size:\n");
    scanf("%d", &n);
    fflush(stdin);
    printf("Enter strings:\n");
    for (i = 0; i < n; i++)
    {
        gets(str[i]);
        upr(str[i]);
    }
    for (i = 0; i < n; i++)
        printf("%s\n", str[i]);
    return 0;
}

void upr(char a[])
{
    int i;
    for (i = 0; a[i] != '\0'; i++)
    {
        a[i] = toupper(a[i]);
    }
}
