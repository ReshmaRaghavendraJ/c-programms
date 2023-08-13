#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int arr[50], i, n, x;
//srand(time(NULL)); [i can use random number as input]
    printf("Enter the size:\n");
    scanf("%d", &n);
    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
//arr[i]=rand()%500;  [Random numbers as inputs 0 to 500 instead of scanf() ]
    printf("Enter the number to be search:\n");
    scanf("%d", &x);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            printf("number found at position :%d\n", i);
            break;
        }
    }
    if (i == n)
        printf("Number not found\n");
    return 0;
}
