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
    printf("Ascending Order sorting:\n");
    for (i = 0; i < n-1; i++)
        for (j = i + 1; j < n-1; j++)
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
    printf("After Sorting in Ascending order:\n");
    for (i = 0; i < n; i++)
        printf("%d\t", arr[i]);
    return 0;
}
