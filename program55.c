#include <stdio.h>
int main()
{
    int num[5], c1 = 0, c2 = 0, possum = 0, negsum = 0, i;
    printf("Enter number:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
        if (num[i] > 0)
        {
            c1++;
            possum = possum + num[i];
        }
        else
        {
            c2++;
            negsum = negsum + num[i];
        }
    }
    printf("Total sum of positive number is:%d\n", possum);
    printf("Total sum of negative number is:%d\n", negsum);
    return 0;
}
