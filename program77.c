#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[50], i, j, n, temp;
    printf("Enter array size:\n");
    scanf("%d", &n);
    printf("Enter Array Elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Descending Order sorting:\n");
    for (i = 0; i < n-1; i++)
        for (j = i + 1; j < n-1; j++)
            if (arr[i] < arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
    printf("After Sorting in Descending order:\n");
    for (i = 0; i < n; i++)
        printf("%d\t", arr[i]);
    return 0;
}
