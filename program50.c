#include <stdio.h>
int main()
{
    int num[5], c = 0, i;
    printf("Enter number:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
        if (num[i] > 0)
            c++;
    }
    printf("Total count of positive number is:%d\n", c);
    return 0;
}
