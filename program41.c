#include <stdio.h>
int main()
{
    int i, temp;

    for (i = 65; i <= 90; i++)
    {
        printf("%c%c\n", i, i + 32);
    }

    return 0;
}
