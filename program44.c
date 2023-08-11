#include <stdio.h>
int main()
{
    int n, i, temp = 0;
    printf("Enter number:\n");
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {
        temp = temp + i;
    }
    printf("%d", temp);
    return 0;
}
