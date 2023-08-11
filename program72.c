#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[20], n, i, negsum = 0, possum = 0;
    printf("Enter array size:\n");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("positive and negative numbers:\n");
    for (i = 0; i < n; i++)
    {
        if (arr[i] < 0)
            negsum = negsum + arr[i];
        else
            possum = possum + arr[i];
    }
    printf("Sum of positive array elements are:%d\n", possum);
    printf("Sum of negative array elements are:%d\n", negsum);
    return 0;
}
