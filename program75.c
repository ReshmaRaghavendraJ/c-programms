#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[20], n, i;
    printf("Enter array size:\n");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Find negative number and replace it by zeros:\n");
    for (i = 0; i < n; i++)
    {
        if (arr[i] < 0)
            arr[i] = 0;
        printf("%d\t", arr[i]);
    }
    return 0;
}
