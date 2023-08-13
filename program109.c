#include <stdio.h>
int reverse(int);
int main()
{
    int num;
    printf("Enter number:\n");
    scanf("%d", &num);
    reverse(num);
    return 0;
}
int reverse(int num)
{
    int rev;
    while (num != 0)
    {
        rev = num % 10;
        num = num / 10;
        printf("%d", rev);
    }
    return rev;
}
