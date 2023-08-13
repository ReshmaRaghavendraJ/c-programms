#include <stdio.h>
int main()
{
    int r, c, n;
    printf("Enter number of rows:\n");
    scanf("%d", &n);
    for (r = 1; r <= n; r++)
    {
        for (c = r; c < n; c++)
            printf(" ");
        for (c = 1; c <= 2 * r - 1; c++)
            printf("*");
        printf("\n");
    }
    return 0;
}
