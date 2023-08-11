#include <stdio.h>
int main()
{
    int i, j;
    printf("Capital A to Z:\n");
    for (i = 65; i <= 90; i++)
        printf("%c\n", i);
    printf("Small a to z:\n");
    for (j = 90; j <= 122; j++)
        printf("%c\n", j);
    return 0;
}
