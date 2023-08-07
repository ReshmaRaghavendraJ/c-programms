#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("It is Even number");
    else
        printf("It is Odd number");
    return 0;
}
