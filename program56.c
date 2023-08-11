#include <stdio.h>
int main()
{
    int sum = 0, num;
    printf("Enter the number:\n");
    while (1)
    {
        scanf("%d", &num);
        sum = sum + num;
        if (num == 0)
            break;
    }
    printf("total sum is:%d\n", sum);
    return 0;
}
