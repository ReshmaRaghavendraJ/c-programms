#include <stdio.h>
int main()
{
    int num, temp, rev = 0, remainder;
    printf("Enter the Number:\n");
    scanf("%d", &num);
    temp = num;
    while (num != 0)
    {
        remainder = num % 10;
        rev = rev * 10 + remainder;
        num = num / 10;
    }
    printf("%d\n", rev);
    if (rev == temp)
    {
        printf("It is a palindrome number\n");
    }
    else
    {
        printf("It is not a palindrome number\n");
    }

    return 0;
}
