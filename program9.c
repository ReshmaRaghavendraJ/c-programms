#include <stdio.h>
void change(int);
int main()
{
    int a = 30;
    change(a);
    printf("The value of a is: %d\n", a);
    return 0;
}
void change(int num)
{
    num++;
    printf("The value of num is: %d\n", num++);
}
