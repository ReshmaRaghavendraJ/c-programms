#include <stdio.h>
int primernot(int);
int main()
{
    int num, flag;
    printf("Enter number:\n");
    scanf("%d", &num);
    primernot(num);
    if (flag == 1)
        printf("It is a Prime\n");
    else
        printf("It is not a Prime\n");
    return 0;
}

int primernot(int num)
{
    int i, flag;
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            return 1;
        }
        else
        {
            flag = 0;
            return 0;
        }
    }
}
