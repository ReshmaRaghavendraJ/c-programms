#include <stdio.h>
int palindrome(int, int);
int main()
{
    int num, t, rev = 0;
    printf("Enter Number:\n");
    scanf("%d", &num);
    t = num;
    rev = palindrome(num, rev);
    if (t == rev)
        printf("It is a Palindrome\n");
    else
        printf("It is not a Palindrome\n");
    return 0;
}
int palindrome(int num, int rev)
{
    int temp;
    while (num != 0)
    {
        temp = num % 10;
        rev = rev * 10 + temp;
        num = num / 10;
    }
    printf("%d\n", rev);
    return rev;
}
