#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, arr[20], sumeven = 0, sumodd = 0, n;
    printf("Enter array size:\n");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Sum of Even numbers is:\n");
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            sumeven = sumeven + arr[i];

        else
            sumodd = sumodd + arr[i];
    }
    printf("%d\n", sumeven);
    printf("%d\n", sumodd);
    return 0;
}
