#include <stdio.h>
void f1(int[]);
int main()
{
    int a[3] = {10, 20, 30};
    printf("The value of a[] is:%d\n", a);
    f1(a);
    return 0;
}
void f1(int num[])
{
    printf("The value of num[] is: %d\n", num);
}
