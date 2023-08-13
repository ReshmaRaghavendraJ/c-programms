#include <stdio.h>
int main()
{
    int start, end, sum = 0, i;
    printf("Enter Start and nding number:\n");
    scanf("%d%d", &start, &end);
    for (i = start; i <= end; i++)
    {
        sum = sum + i;
    }
    printf("Sum=%d\n", sum);
    return 0;
}
