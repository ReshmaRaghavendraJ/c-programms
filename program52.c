#include <stdio.h>
int main()
{
    int num[5], c1 = 0, c2 = 0, i;
    printf("Enter number:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
        if (num[i] > 0)
            c1++;
        else
            c2++;
    }
    printf("Total count of positive number is:%d\n", c1);
    printf("Total count of negative number is:%d\n", c2);
    return 0;
}
