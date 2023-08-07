#include <stdio.h>
int add(int, int);
struct add
{
    int a, b;
};
int main()
{
    struct add x, y;
    x.a = 5, x.b = 3;
    y.a = 1, y.b = 6;
    int r1 = 0, r2 = 0;
    printf("Addition using structure and function\n");
    r1 = add(x.a, y.a);
    r2 = add(x.b, y.b);
    printf("The result1 is:%d\n", r1);
    printf("The result2 is:%d\n", r2);
    return 0;
}
int add(int num1, int num2)
{
    int result;
    result = num1 + num2;
    return result;
}
