#include <stdio.h>
int main()
{
    int i, n, temp = 0;
    printf("Enter number:\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        temp = temp + i;
    printf("%d", temp);
    return 0;
}
