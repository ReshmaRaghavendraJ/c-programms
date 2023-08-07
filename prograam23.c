#include <stdio.h>
int main()
{
    int r, c, n;
    printf("Enter number of rows:\n");
    scanf("%d", &n);
    for (r = 1; r <= n; r++)
    {
        for (c = 1; c <= n - r; c++)
            printf(" ");
        for (c = 1; c <= r; c++)
            printf("%c", (char)(c + 64));
        printf("\n");
    }
    return 0;
}
