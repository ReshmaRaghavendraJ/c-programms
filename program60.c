#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char str[10][30], temp[30];
    int n, i, j;
    printf("Enter number of names to be sort:\n");
    scanf("%d", &n);
    printf("enter the string names:\n");
    for (i = 0; i < n; i++)
        scanf("%s", &str[i]);

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
            if (strcmp(str[i], str[j]) > 0)
                strcpy(temp, str[i]);
        strcpy(str[i], str[j]);
        strcpy(str[j], temp);
    }

    printf("After sort the names are:\n");
    for (i = 0; i < n; i++)
        printf("%s\n", str[i]);
    return 0;
}
