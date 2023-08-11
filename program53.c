#include <stdio.h>
int main()
{
    int num[5], c1 = 0, sum = 0, i;
    printf("Enter number:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
        if (num[i] > 0)
        {
            c1++;
            sum = sum + num[i];
        }
    }
    printf("Total sum of positive number is:%d\n", sum);

    return 0;
}
