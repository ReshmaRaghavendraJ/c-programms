#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[20], i, n, sum = 0;
    printf("Enter array size:\n");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("After adding first element to all the array elements is:\n");
    for (i = 0; i < n; i++)
    {
        sum = arr[0] + arr[i + 1];
        printf("%d\n", sum);
    }

    return 0;
}
