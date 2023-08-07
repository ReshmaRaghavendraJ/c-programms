#include <stdio.h>
int main()
{
    int next, prev, num, temp = 0;
    printf("Enter number:\n");
    scanf("%d", &num);
    temp = num;
    prev = --num;
    printf("The previous number is:%d\n", prev);
    next = ++temp;
    printf("The next number is:%d\n", next);
    return 0;
}
