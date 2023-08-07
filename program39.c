#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter the number of times repetations:\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        printf("Hello:%d\n", i);
    return 0;
}
