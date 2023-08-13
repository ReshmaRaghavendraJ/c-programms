#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[30], i, j, max, n, found;
    printf("Enter the array size:\n");
    scanf("%d", &n);
    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    max = arr[0];
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    found = i;

    printf("Maximum of array element is:%d\n", max);
    return 0;
}
