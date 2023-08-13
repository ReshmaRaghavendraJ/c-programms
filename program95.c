#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[10][10], trans[10][10], i, j, m, n;
    printf("Enter array size m and n:\n");
    scanf("%d%d", &m, &n);

    printf("Enter array elements:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("Array elements are:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            trans[j][i] = a[i][j];

    printf("After transpose of array a is:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d\t", trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}
