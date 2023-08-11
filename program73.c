#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[20], n, i, negcount = 0, poscount = 0, zerocount = 0;
    printf("Enter array size:\n");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("positive and negative numbers:\n");
    for (i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            zerocount++;
        else if (arr[i] > 0)
            poscount++;
        else
            negcount++;
    }
    printf("Total count of positive array elements are:%d\n", poscount);
    printf("Total count of negative array elements are:%d\n", negcount);
    printf("Total count of zero array elements are:%d\n", zerocount);
    return 0;
}
