#include <stdio.h>
int main()
{
    int n, i, temp = 0;
    printf("Enter number:\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
            temp = temp + i;
        printf("%d\t", temp);
    }

    return 0;
}
