#include <stdio.h>
int main()
{
    int n, temp = 1, i;
    printf("Enter Number:\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        temp = temp * i;
    }
    printf("Fact of number is:%d\n", temp);
    return 0;
}
