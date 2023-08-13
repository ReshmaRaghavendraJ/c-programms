#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[10][10], i, j, m, n, sym = 0;
    printf("Enter the array size of rows and columns :\n");
    scanf("%d%d", &m, &n);

    printf("Enter array elements:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d\t", &a[i][j]);

    printf("array elements are:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    if (m == n)
    {
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
                if (a[i][j] != a[j][i])
                {
                    sym = 1;
                    break;
                }
        if (sym == 1)
            printf("The given matrix is not a symmetric\n");
        else
            printf("The given matrix is Symmetric\n");
    }
    else
        printf("Not a Square matrix");
    return 0;
}
