#include <stdio.h>
int main()
{
    int i, num[10], sum = 0;
    printf("Enter input numbers:\n");
    for (i = 0; i < 10; i++)
        scanf("%d", &num[i]);
    for (i = 0; i < 10; i++)
        sum = sum + num[i];
    printf("The sum of 10 numbers are:%d", sum);
    return 0;
}
