#include <stdio.h>
#include <conio.h>
int main()
{
    int a[50], i, j, n, min, temp;
    printf("Enter number of size\n");
    scanf("%d", &n);
    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Array elements are:\n");
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);

    // Logic of selection sort
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    printf("After selection sort is:\n");
    for (i = 0; i < n; i++)
        printf("%d\t", a[i]);

    return 0;
}
