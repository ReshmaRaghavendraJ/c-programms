#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[20], n, i, evencount = 0, oddcount = 0;
    printf("Enter array size:\n");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Counting the even and odd array elements:\n");
    for (i = 0; i < n; i++)
        if (arr[i] % 2 == 0)
            evencount++;
        else
            oddcount++;
    printf("Total count of even numbers is:%d\n", evencount);
    printf("Total count of odd numbers is:%d\n", oddcount);
    return 0;
}
