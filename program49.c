#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, i, sum1 = 0, sum2 = 0, c1 = 0, c2 = 0;
    printf("Enter numbers:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            sum1 = sum1 + num;
            c1++;
        }
        else
        {
            sum2 = sum2 + num;
            c2++;
        }
    }
    printf("even:%d\n", sum1);
    printf("odd:%d\n", sum2);
    printf("count of even:%d\n", c1);
    printf("count of odd:%d\n", c2);
    return 0;
}
