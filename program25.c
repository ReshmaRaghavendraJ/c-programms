#include <stdio.h>
#include <stdlib.h>
struct login
{
    int empno;
    int h, m, s
};

int main()
{
    struct login rec[5];
    int i;
    printf("Enter the values:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &rec[i].empno);
        scanf("%d:%d:%d", &rec[i].h, &rec[i].m, &rec[i].s);
        fflush(stdin);
    }

    printf("The login details are:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t%d:%d:%d\t", rec[i].empno, rec[i].h, rec[i].m, rec[i].s);
        if (rec[i].h == 10 && rec[i].m == 0)
            printf("Exact login\n");
        else if (rec[i].h <= 9)
            printf("Early login\n");
        else
            printf("late login\n");
    }
    return 0;
}
