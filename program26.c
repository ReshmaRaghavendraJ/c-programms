#include <stdio.h>
struct axis
{
    int x, y;
};
int main()
{
    struct axis p, q;
    p.x = 10, p.y = 20;

    q = p;
    q.x++;
    printf("%d\t%d", q.x, q.y);
    return 0;
}
