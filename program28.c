#include <stdio.h>
struct axis
{
    int x;
};
void move(struct axis[]);
int main()
{
    struct axis rec[] = {10, 20, 30};
    move(rec);
    printf("%d\t%d\t%d", rec[0].x, rec[1].x, rec[2].x);
    return 0;
}
void move(struct axis num[])
{
    num[0].x++;
    num[1].x++;
    num[2].x++;
}
