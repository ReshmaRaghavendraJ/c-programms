#include <stdio.h>
int natural(int, int);
int main()
{
    int n, i, sum = 0;
    printf("Enter Number:\n");
    scanf("%d", &n);
    natural(n, sum);
    return 0;
}
int natural(int n, int sum)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("%d\n", sum);
    return sum;
}
