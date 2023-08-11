#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[30], n, i, sum = 0;
    float avg;
    printf("Enter size of an array within 30:\n");
    scanf("%d", &n);
    printf("Enter Array Elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Sum and avg of array elemts are:\n");
    for (i = 0; i < n; i++)
        sum = sum + arr[i];
    avg = (float)sum / n;
    printf("Sum of array elements are:%d\n", sum);
    printf("average of array elements are:%f\n", avg);
    return 0;
}
