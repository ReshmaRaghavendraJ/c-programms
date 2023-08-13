#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[10][50], b[10][50], c[10][50];
    int i, j, n, m;
    printf("Enter size of n(rows):\n");
    scanf("%d", &n);
    printf("Enter size of m(columns):\n");
    scanf("%d", &m);
    printf("Enter array a elements:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    printf("Enter array b elements:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &b[i][j]);
    printf("Array a is:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("Array b is:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            c[i][j] = a[i][j] * b[i][j];
    printf("Multiplication of matrix a and b is:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
