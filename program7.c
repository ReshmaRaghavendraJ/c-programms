#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int arr[5], i, j, temp;
    srand(time(NULL));
    printf("Enter Array Elements:\n");
    for (i = 0; i < 5; i++)
        arr[i] = rand() % 5;
    // scanf("%d", &arr[i]);

    /* Ascending order
    for (i = 0; i < 5; i++)
     {
         for (j = i + 1; j < 5; j++)
             if (arr[i] > arr[j])
             {
                 temp = arr[i];
                 arr[i] = arr[j];
                 arr[j] = temp;
             }
     }*/

    // Descending order
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
            if (arr[i] < arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
    }

    for (i = 0; i < 5; i++)
        printf("%d\t", arr[i]);
    return 0;
}
