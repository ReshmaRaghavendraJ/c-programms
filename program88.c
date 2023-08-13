#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int arr[50], i, j, n, temp;
    int mid, low, high, x;
    printf("Enter array size:\n");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Sorted array elements are:\n"); // Selection Sort till here
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        printf("%d\t", arr[i]);
    }

    // Binary Search Start from here...
    printf("Enter the number to be search:\n");
    scanf("%d\n", &x);
    low = 0;
    high = n - 1;
    do
    {
        mid = (low + high) / 2;
        if (arr[mid] == x)
        {
            printf("Number found at position %d\n", mid);
            return 0;
        }
        if (arr[mid] > x)
            high = mid - 1;
        else
            low = mid + 1;
    } while (low <= high);
    printf("element not found\n");
    return 0;
}
