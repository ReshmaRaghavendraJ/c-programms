#include <stdio.h>
int main()
{
    int r, c, n;
    printf("Enter number of rows:\n");
    scanf("%d", &n);
    for (r = 0; r < n; r++)
    {
        for (c = 0; c <= r; c++)
        {
            if (c == r)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
