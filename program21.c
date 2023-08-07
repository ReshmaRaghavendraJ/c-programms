#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter number of rows:\n");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        for (j = 5; j >= i; j--)
            printf("*");
        printf("\n");
    }
    return 0;
}
