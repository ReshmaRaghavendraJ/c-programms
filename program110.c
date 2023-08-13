#include <stdio.h>
void factorial(int);
int main()
{
    int num;
    printf("Enter Number:\n");
    scanf("%d", &num);
    factorial(num);
    return 0;
}
void factorial(int num)
{
    int i, temp = 1;
    for (i = num; i >= 1; i--)
    {
        temp = temp * i;
    }
    printf("%d", temp);
    return 0;
}
