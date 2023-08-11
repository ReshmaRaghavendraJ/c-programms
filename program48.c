#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, i, sum1 = 0, sum2 = 0;
    printf("Enter numbers:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &num);
        if (num % 2 == 0)
            sum1 = sum1 + num;
        else
            sum2 = sum2 + num;
    }
    printf("even:%d\n", sum1);
    printf("odd:%d\n", sum2);
    return 0;
}
