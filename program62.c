#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{
    char str[50];
    int i, count = 0;
    printf("Enter String:\n");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
        count++;
    printf("Total count is:%d", count);
    return 0;
}
