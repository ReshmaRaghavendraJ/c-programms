#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two numbers num1 and num2:\n");
    scanf("%d%d", &num1, &num2);
    if (num1 > num2)
        printf("Large:%d", num1);
    else
        printf("Large:%d", num2);
    return 0;
}
