#include <stdio.h>
int main()
{
    int num, sum = 0, temp;
    printf("Enter number:\n");
    scanf("%d", &num);
    while (num != 0)
    {
        temp = num % 10;
        num = num / 10;
        sum = sum + temp;
    }
    printf("Total sum of digits is:%d \n", sum);
    return 0;
}
