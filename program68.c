#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, arr[20], i;
    printf("Enter array size upto 20:\n");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("The array is:\n");
    for (i = 0; i < n; i++)
        printf("arr[%d]=%d\n", i, arr[i]);
    return 0;
}
