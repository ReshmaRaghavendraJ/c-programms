#include <stdio.h>
#include <string.h>
int main()
{
    int arr[20], i, found = -1, n, key;
    printf("Enter the array size:\n");
    scanf("%d", &n);
    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the key to search in an array elements:\n");
    scanf("%d", &key);
    for (i = 0; i < n; i++)

        if (arr[i] == key)
        {
            found = i;
            break;
        }
    if (found == -1)
        printf("key not found\n");
    else
        printf("%d found at position %d\n", key, found);
    return 0;
}
